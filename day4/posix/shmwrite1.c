#include<stdio.h>
#include<sys/mman.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

void main()
{
	int fd=0;	int pid=0;
	void *ptr;
	fd = shm_open("/nigam", O_CREAT|O_RDWR, 0666 );
	ftruncate(fd, 200);
	ptr = mmap(0, 200, PROT_WRITE, MAP_SHARED, fd, 0);
	memset(ptr, 0, 200);

	strcpy(ptr, "rajyotsava");
	munmap(ptr, 200);
	close(fd);
	return;
}
