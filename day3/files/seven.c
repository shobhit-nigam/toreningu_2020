#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0, fdb=0;
	static char buf[20];
	fda = open("stark.txt", O_RDWR);
	read(fda, buf, 6);
	write(fda, "hello world\n", 11);
	
	close(fda);
	return;
}
