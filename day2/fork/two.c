#include<stdio.h>
#include<unistd.h>

void main(){
	int i=0;
	printf("hello pid = %d\n", getpid());
	i = fork();
	if (i==0)
	{
		printf("namaste pid = %d\n", getpid());
		printf("salaam pid = %d \n", getpid());
	}
	else
	{
		printf("in parent pid =%d\n", getpid());
	}
	printf("hello\n");
	return;
}
