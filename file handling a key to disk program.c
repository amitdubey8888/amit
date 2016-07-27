#include<stdio.h>
int main(int argc, char *argv[])
{
    FILE *fp;
	char ch;
	if(argc!=2)
	{
		printf("You forgot to enter your file name.\n");
		exit(1);
	}
	if(fp=fopen(argv[1],"w")==NULL)
	{
		printf("Can nat open file.\n");
		exit(1);
	}
	do
	{
		ch=getchar();
		putc(ch,fp);
		
	}while(ch!='$');
		fclose(fp);
		return 0;	
}
