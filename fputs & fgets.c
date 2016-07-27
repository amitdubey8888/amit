#include<stdio.h>
int main()
{
	char str[80];
	FILE *fp;
	if((fp=fopen("test","w"))==NULL)
	{
		printf("Can not open file.\n");
		exit(1);
	}
	do
	{
		printf("Enter a string(CR to quit):\n");
		gets(str);
		strcat(str,"\n");
		fputs(str,fp);
	}while(*str!='\n');
	return 0;
}
