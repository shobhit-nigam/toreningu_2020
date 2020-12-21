#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
int task=0;
#define TI 5

pthread_mutex_t flag;

void funca(){
	long int i =0;
	printf("%u will take the lock\n", pthread_self());
	pthread_mutex_lock(&flag);
	task = task + 1;
	printf("task %d has started\n", task);
	for (i=0; i<TI; i++){
		sleep(1);
	}
	printf("task %d has ended\n", task);
	printf("%u will release the lock\n", pthread_self());
	pthread_mutex_unlock(&flag);
	return;
}

void funcb(){
	long int i =0;
	printf("%u will take the lock\n", pthread_self());
	pthread_mutex_lock(&flag);
	task = task + 1;
	printf("task %d has started\n", task);
	for (i=0; i<TI; i++){
		sleep(1);
	}
	printf("task %d has ended\n", task);
	printf("%u will release the lock\n", pthread_self());
	pthread_mutex_unlock(&flag);
	return;
}


void main()
{
	int i=0;
	pthread_t ta, tb;
	pthread_create(&ta, NULL, (void *) funca, NULL);
	pthread_create(&tb, NULL, (void *) funcb, NULL);
	pthread_join(ta, NULL);
	pthread_join(tb, NULL);
	printf("last line of main\n");
	return;
}
