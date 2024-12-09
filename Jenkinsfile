pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/your_username/your_repository.git'
            }
        }

        stage('Build') {
            steps {
                sh 'g++ -o my_program source_code.cpp'
            }
        }

        stage('Run') {
            steps {
                sh './my_program catalog.xml'
            }
        }
    }

    post {
        always {
        }
    }
}
