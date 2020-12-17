#include<stdio.h>
#include<semaphore.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	sem_t *sem;
	int pid=getpid();
	sem = sem_open("/poonam", O_CREAT|O_RDWR, 0666, 2);
	printf("%d asking for sempahore\n", pid);
	sem_wait(sem);
	printf("%d got the sempahore\n", pid);
	// crtical section
	sleep(10);
	printf("%d released the sempahore\n", pid);
	sem_post(sem);
	
	sem_close(sem);

	return;
}
