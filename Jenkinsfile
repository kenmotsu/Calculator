pipeline{
	agent any;
	
	stages {
		stage('Check out') {
			steps {
				checkout scm
			}
		}
		stage('Build') {
			steps {
				sh "cd calc/src && make"
			}
		}
		stage('Statick analysis') {
			steps {
				sleep 2
			}
		}
		stage('Unit Test') {
			steps{
				sleep 2
			}
		}
	}
}
