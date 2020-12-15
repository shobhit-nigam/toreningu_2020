#include<stdio.h>
#include<unistd.h>

void main(){
	printf("hello pid = %d\n");
	fork();
	printf("namaste pid = %d\n", getpid());
	printf("salaam pid = %d \n", getpid());
	return;
}
