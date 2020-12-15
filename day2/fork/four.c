#include<stdio.h>
#include<unistd.h>

void main(){
	int i=0;
	printf("hello pid = %d\n", getpid());
	sleep(1);
	printf("---------------\n");
	i = fork();
	if (i==0)
	{
		printf("i am child pid =%d\n", getpid());
		printf("i am child i =%d\n", i);
		printf("i am child address of i =%u\n", &i);
		printf("i am child, my parent is %d\n", getppid());
	}
	else
	{
		printf("i am parent pid =%d\n", getpid());
		printf("i am parent i =%d\n", i);
		printf("i am parent address of i =%u\n", &i);
		printf("i am parent, my parent is %d\n", getppid());
	}
	printf("hello\n");
	return;
}
