#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0, fdb=0;
	fda = open("ironman.txt", O_RDONLY);
	perror("status of open : ");
	printf("fda =%d\n", fda);
	// code to work with file
	close(fda);
	return;
}
