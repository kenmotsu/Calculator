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
		stage('Import a project') {
			steps {
				sh 'cpptestcli -localsettings "calc/cpptest_option" -data "." -import calc/.project'
			}
		}
		stage('Statick analysis') {
			steps {
				sh 'cpptestcli -localsettings "calc/cpptest_option" -data "." -resource "calc" -config "calc/TestConfiguration/Intern.properties"'
			}
		}
		stage('Unit Test') {
			steps {
				sh 'cpptestcli -localsettings "calc/cpptest_option" -data "." -resource "calc" -config "calc/TestConfiguration/03.UnitTest.properties"'
			}
		}
		stage('Save reports') {
			steps {
				archiveArtifacts 'rep*'
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