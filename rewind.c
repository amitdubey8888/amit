#include<stdio.h>
int main()
{
	char str[100];
	FILE *fp;
	if((fp=fopen("test","w"))==NULL)
	{
		printf("Can not open file.\n");
		exit(1);
	}
	do
	{
		printf("Enter a strng (CR to quit):\n");
		gets(str);
		strcat(str,"\n");
		fputs(str,fp);
	}while(*str!='\n');
	rewind(fp);
	while(!feof(fp))
	{
		fgets(str,79,fp);
		printf(str);
	}
	return 0;
}
