#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0, fdb=0;
	static char buf[20];
	fda = open("ironman.txt", O_RDONLY);
	fdb = open("blackwidow.txt", O_WRONLY|O_CREAT, 0644);
	printf("ironman fd =%d\n", fda);
	printf("blackwidow fa =%d\n", fdb);
	read(fda, buf, 6);
	write(1, buf, 6);
	write(1, "\n", 1);	// printf = write(1)

	close(fda);
	close(fdb);
	return;
}
