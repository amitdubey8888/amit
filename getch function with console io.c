#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter some text (type a period to quit).\n");
	do
	{
		ch=getch();
		/*if(islower(ch)) ch=toupper(ch);
		else ch=tolower(ch);*/
		putchar(ch);
	}while(ch!= '.');
	return 0;
}
