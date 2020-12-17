#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda = 0;
	printf("opening the file for writing\n");
	sleep(2);
	fda = open("sector", O_WRONLY);
	sleep(2);
	printf("going to write\n");
	sleep(2);
	write(fda, "messenger and communicator", 26);
	printf("will exit now\n");
	sleep(20);
	close(fda);
	return;
}
