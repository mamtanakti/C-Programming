#include<stdio.h>
void main()
{
int f=1;
int s=1;
int i;
printf("1 1");
for(i=2;i<=50;i++)
{
	int next=f+s;
	printf("  %d",next);
	f=s;
	s=next;
}
}
