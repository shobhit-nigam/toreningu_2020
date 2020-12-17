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
	int num=0;
	struct msgbuf vara;
	key = ftok("/bin", 100);
	id = msgget(key, IPC_CREAT|0666);
	printf("enter the mtype & msg\n");
	scanf("%ld", &vara.mtype);
	scanf("%s", vara.mtext);
	
	msgsnd(id, &vara, sizeof(vara), 0);
	printf("message sent\n");
	return;
}
