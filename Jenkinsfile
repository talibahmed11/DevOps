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
                sh 'g++ -o my_program source_code.cpp'
            }
        }

        stage('Run') {
            steps {
                // Run your program and parse the XML
                sh './my_program catalog.xml'
            }
        }
    }

    post {
        always {
            // Clean up actions (if any)
        }
    }
}
