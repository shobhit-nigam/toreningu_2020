#include<stdio.h>
#include<unistd.h>

void main()
{
	int pid = 0;
	printf("hello world\n");
	pid = getpid();
	printf("my process id =%d\n",pid);
	return;
}
