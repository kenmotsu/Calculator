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
				sh 'cd calc/src && make clean && make'
			}
		}
		stage('Statick analysis') {
			steps {
				sh 'cpptestcli -data "." -import calc/.project'
				sh 'cpptestcli -data "." -resource "calc" -config "calc/TestConfiguration/インターンシップ向け.properties"'
                archiveArtifacts 'rep*'
			}
		}
		stage('Unit Test') {
			steps {
				sleep 2
			}
		}
		stage('Send mail') {
			steps {
				mail bcc: '', body: "Build status : ${currentBuild.currentResult}\n${env.BUILD_URL}", cc: '', from: '', replyTo: '', subject: "[TestResult]Job: ${env.JOB_NAME}(build number: ${env.BUILD_NUMBER})", to: 'kenmotsu@techmatrix.co.jp'
			}
		}
		stage('Clean workspace') {
		    steps {
		        cleanWs()
		    }
		}
	}
}