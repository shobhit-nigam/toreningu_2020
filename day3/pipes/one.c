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
		read(pd[0], buf, 6);
		printf("read data is %s\n", buf);
		
	}
	else
	{
		write(pd[1], "toshiba tsip", 12);
		printf("written by parent\n");

	}
	return;
}
