#include<stdio.h>
#include<unistd.h>

void main()
{
	int pid =0;
	write(1, "hello world!!\n", 14);
	pid = getpid();
	printf("my process id =%d\n",pid);
	printf("my parent process id =%d\n",getppid());
	printf("rajesh allowed to modify\n");
	while(1){
	}
	return;
}
