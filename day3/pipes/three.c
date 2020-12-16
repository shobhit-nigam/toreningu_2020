#include<stdio.h>
#include<unistd.h>


void main(){
	int i=0;	int pd[2];
	pipe(pd);
	
	printf("parent creates pipe\n");
	i = fork();
	
	if (i==0)
	{
		static char buf[20];
		close(pd[1]);
		printf("child will read\n");
		read(pd[0], buf, 6);
		printf("read data is %s\n", buf);
		printf("child will read again after sleeping \n");
		sleep(10);
		read(pd[0], buf, 6);
		printf("read data is %s\n", buf);
	}
	else
	{
		close(pd[0]);
		printf("parent will sleep\n");
		sleep(2);
		write(pd[1], "toshiba tsip", 12);
		printf("written by parent\n");
	}
	return;
}
