#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

void display_titles(const char *filename) {
    xmlDoc *document = xmlReadFile(filename, NULL, 0);
    if (!document) {
        printf("Error: Could not parse the file %s\n", filename);
        return;
    }

    xmlNode *root = xmlDocGetRootElement(document);

    for (xmlNode *node = root->children; node != NULL; node = node->next) {
        if (node->type == XML_ELEMENT_NODE) {
            if (xmlStrcmp(node->name, (const xmlChar *)"book") == 0) {
                for (xmlNode *child = node->children; child != NULL; child = child->next) {
                    if (child->type == XML_ELEMENT_NODE && 
                        xmlStrcmp(child->name, (const xmlChar *)"title") == 0) {
                        printf("Book Title: %s\n", xmlNodeGetContent(child));
                    }
                }
            }
        }
    }

    xmlFreeDoc(document);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <path_to_xml_file>\n", argv[0]);
        return 1;
    }

    display_titles(argv[1]);
    return 0;
}
