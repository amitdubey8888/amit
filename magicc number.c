#include<stdio.h>
#include<stdlib.h>
int magic;
int main()
{
	extern int magic;                                     /*magic number*/
	int guess;                                     /*user number*/
	magic=read();                                   /*generate magic number*/
	printf("Enter guess numbr...\n");
	scanf("%d",&guess);
	if(guess==magic) printf("*****right*****");
	else printf("****not magic number****");
	return 0;
}
