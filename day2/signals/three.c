#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void hand_a(){
	// some code to execute when signal arrives
	printf("signal handled, no big deal\n");
	return;
}

void hand_b(){
	printf("talk to my hand\n");
	return;
}

void main(){
	int i=0;
	int pid = getpid();
	signal(SIGTERM, hand_a);
	signal(SIGINT, hand_b);
	signal(SIGKILL, hand_b);
	for (i=0; 1; i++){
		printf("%d running since %d seconds\n", pid, i);
		sleep(1);	
	}
	return;
}
