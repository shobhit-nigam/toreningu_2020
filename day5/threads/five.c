#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void funca(){
	int i=0;
	for (i=6; i>0; i--){
		printf("task A has %d seconds left\n", i);
		sleep(1);
	}
	return;
}

void funcb(){
	int i=0;
	for (i=3; i>0; i--){
		printf("task B has %d seconds left\n", i);
		sleep(1);
	}
	return;
}


void main()
{
	int i=0;
	funca();
	funcb();
	for (i=9; i>0; i--){
		printf("main task has %d seconds left\n", i);
		sleep(1);
	}
	return;
}
