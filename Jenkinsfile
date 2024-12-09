pipeline {
    agent any

    environment {
        NEXUS_URL = 'http://localhost:8081'  // Nexus server URL
        NEXUS_REPO = 'releases'  // Nexus repository to upload to
        NEXUS_CREDENTIALS_ID = 'nexus'  // Jenkins credential ID for Nexus
    }

    stages {
        stage('Checkout') {
            steps {
                // Clone the repository from GitHub
                git 'https://github.com/talibahmed11/DevOps.git'
            }
        }

        stage('Build') {
            steps {
                // Build your C++ application
                // You mentioned the source code is in a file named `source_code.txt` in GitHub, so the command would likely need to be modified
                // to reflect the correct filename, which might be something like `source_code.txt` in your GitHub repository
                bat 'g++ -o my_program C++ source code.txt'  // Use source_code.txt if that's your actual file
            }
        }

        stage('Upload to Nexus') {
            steps {
                // Upload the artifact to Nexus
                nexusArtifactUploader(
                    nexusUrl: "${NEXUS_URL}",
                    repository: "${NEXUS_REPO}",
                    credentialsId: "${NEXUS_CREDENTIALS_ID}",
                    artifacts: [
                        [
                            artifactId: 'my_program',
                            file: 'my_program.exe',  // Path to you
