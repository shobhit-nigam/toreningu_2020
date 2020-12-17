#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct msgbuf{
	long mtype;
	char mtext[40];
};

void main()
{
	int key;	int id;
	long int num=0;
	struct msgbuf vara;
	key = ftok("/bin", 100);
	id = msgget(key, IPC_CREAT|0666);
	printf("which mtype msg do you want to read\n");
	scanf("%ld", &num);
	
	msgrcv(id, &vara, sizeof(vara), num, 0);
	printf("message read is --> %s\n", vara.mtext);
	printf("removing the message queue now\n");
	msgctl(id, IPC_RMID, NULL);
	perror("msgctl");
	return;
}
