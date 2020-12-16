#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0, fdb=0;
	static char buf[20];
	fda = open("ironman.txt", O_RDONLY);
	perror("status of open : ");
	printf("fda =%d\n", fda);
	read(fda, buf, 6);
	printf("read data is --> %s\n", buf);
	
	read(fda, buf, 8);
	printf("re-read data is --> %s\n", buf);
	close(fda);
	return;
}
