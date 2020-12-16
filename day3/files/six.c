#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0, fdb=0;
	static char buf[20];			// 0 1 2
	printf("pid =%d\n", getpid());
	sleep(30);
	printf("opening ironman\n");
	fda = open("ironman.txt", O_RDONLY);
	printf("ironman fd =%d\n", fda);
	sleep(20);
	printf("closing stdout\n");					// 0 1 2 3  
	close(1);				// 0 2 3
	sleep(20);
//	printf("opening nagaraju\n");					// 0 1 2 3  
	fdb = open("nagaraju", O_WRONLY);	// 0 1 2 3
	sleep(20);
	close(fda);
	close(fdb);
	return;
}
