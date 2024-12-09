pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/talibahmed11/DevOps.git'
            }
        }

        stage('Build') {
            steps {
                // Use Cygwin's bash to compile the code
                bat 'C:/cygwin64/bin/bash -c "g++ -o my_program source_code.txt"'
            }
        }

        stage('Run') {
            steps {
                // Run your program using Cygwin's bash
                bat 'C:/cygwin64/bin/bash -c "./my_program catalog.xml"'
            }
        }
    }

    post {
        always {
            // Clean up actions (if any)
        }
    }
}
