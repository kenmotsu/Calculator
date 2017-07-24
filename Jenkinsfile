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
				sh "cd calc/src && make clean && make"
			}
		}
		stage('Statick analysis') {
			steps {
				sh "cd .. && cpptestcli -import .project && cpptestcli -data \"C:\Users\kenmotsu\parasoft\workspace\" -resource \"calc\" -config user://インターンシップ向け"
			}
		}
		stage('Unit Test') {
			steps {
				sleep 2
			}
		}
		stage('Send mail') {
			steps {
				mail bcc: '', body: '', cc: '', from: '', replyTo: '', subject: '', to: 'kenmotsu@techmatrix.co.jp'
			}
		}
	}
}
