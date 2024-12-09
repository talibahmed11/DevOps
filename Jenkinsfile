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
                bat 'g++ -o my_program "C++ source code.txt"'
            }
        }

        stage('Run') {
            steps {
                // Run your program and parse the XML
                bat './my_program catalog.xml'
            }
        }
    }

    post {
        always {
            // Clean up actions (if any)
        }
    }
}
