#include<stdio.h>
int main()
{
	char s[80],*str;
	int space;
	printf("Enter a string:");
	gets(s);
	str=s;
	for(space=0;*str;str++)
	{
		if(*str!=' ') continue;
		space++;
	}
	printf("%d Space \n",space);
}
