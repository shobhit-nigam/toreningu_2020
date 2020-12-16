#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0, fdb=0;
	static char buf[20];			// 0 1 2
	fda = open("ironman.txt", O_RDONLY);
	printf("ironman fd =%d\n", fda);
	read(fda, buf, 6);			// 0 1 2 3  
	close(1);				// 0 2 3
	fdb = open("nagaraju", O_WRONLY);	// 0 1 2 3
	printf("nagaraju fd =%d\n", fdb);	// 
	close(fda);
	close(fdb);
	return;
}
