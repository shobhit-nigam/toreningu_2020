#include<stdio.h>
#include<unistd.h>

void main()
{	
	int pid=0; 	int i=0;
	i=fork();
	if(i!=0)
	{
		printf("i am the parent with pid %d\n", getpid());
		printf("i am the parent with ppid %d\n", getppid());		
	}
	else
	{
		printf("i am the child with pid %d\n", getpid());
		printf("i am the child with ppid %d\n", getppid());		
	}
	printf("last line\n");
	return;
}
