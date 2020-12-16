#include<stdio.h>
#include<unistd.h>


void main(){
	int i=0;	int pd[2];
	pipe(pd);
	static char buf[20];
	printf("parent will read\n");
	read(0, buf, 7);
	return;
}
