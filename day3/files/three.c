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
	printf("read data is --> %s\n", buf);
	write(fdb, buf, 5);
	write(fdb, "rushottam", 9);

	close(fda);
	close(fdb);
	return;
}
