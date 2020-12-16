#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0, fdb=0;
	static char buf[20];
	fda = open("stark.txt", O_RDWR);
	read(fda, buf, 6);
	lseek(fda, 8, SEEK_CUR);
			//SEEK_SET 	SEEK_END	SEEK_CUR
			// lseek(fda, 0, SEEK_SET);
	read(fda, buf, 7);
	printf("read data is %s\n", buf);
	close(fda);
	return;
}
