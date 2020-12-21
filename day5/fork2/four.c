#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<syslog.h>
#include<unistd.h>

void funca()
{
	int pid=0;	int i=0;
	int s=0;	int j=0, n=0;
	i = fork();
	if(i!=0)
	{
		exit(EXIT_SUCCESS);
	}
	
	// session leader
	s = setsid();
	
	// handle signals
	signal(SIGCHLD, SIG_IGN);
	signal(SIGHUP, SIG_IGN);

	//close all open files 
	n = sysconf(_SC_OPEN_MAX);
	for(j=n; j>=0; j--){
		close(j);
	}
	
	chdir("/");


	return;
}


void main()
{
	funca();
	openlog("mondaydameon", LOG_PID, LOG_DAEMON);
	syslog(LOG_NOTICE, "monday daemon started");
	sleep(20);
	syslog(LOG_NOTICE, "monday daemon ends");
	closelog();
	return;
}
