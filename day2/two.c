#include<stdio.h>
#include<unistd.h>

void main()
{
	int pid=0;	int i=0;
	pid = getpid();
	for (i=0; 1 ; i++){
		printf("%d has been running since %d\n", pid, i);
		sleep(1);
	}
	
	return;
}
