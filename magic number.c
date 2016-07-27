#include<stdio.h>
int magic[9]={1,2,3,4,5,6,7,8,9};
int main()
{
	int i;                  
	int guess;                                    
	printf("Enter guess numbr...\n\n");
	scanf("%d",&guess);
   	printf("Enter position...\n\n");
    scanf("%d",&i);	
	if(guess==magic[i])
	{
	  printf("Right");
	  printf(" %d is the magic number \n\n",magic[i]);
    }   
	else if(0<=i<9)
	{ 
	printf("Not magic number\n\n");
	       if(magic[i]>guess) printf("Too high \n\n");
	       else printf("Too low \n\n");
    }
	return 0;
}
