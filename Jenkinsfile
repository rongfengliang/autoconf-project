pipeline {
  agent {
    node {
      label 'docker-66'
    }

  }
  stages {
    stage('autoconf build') {
      steps {
        sh './autogen.sh'
      }
    }
    stage('configure') {
      steps {
        sh './configure'
      }
    }
    stage('make') {
      steps {
        sh 'make'
      }
    }
    stage('run') {
      steps {
        sh 'src/dalongdemoapp'
      }
    }
  }
}
