#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda = 0;
	static char buf[20];
	printf("opening the file for reading\n");
	sleep(2);
	fda = open("sector", O_RDONLY);
	sleep(2);
	printf("going to read\n");
	sleep(2);
	read(fda, buf, 8);
	printf("read data is %s\n", buf);
	printf("will exit now\n");
	sleep(2);
	close(fda);
	return;
}
