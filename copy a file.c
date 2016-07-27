#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *in,*out;
	char ch;
	if(argc!=3)
	{
		printf("You forgot to enter your file name.\n");
		exit(1);
	}
	if((out=fopen(argv[2],"wb"))==NULL)
	{
		printf("Can not open file.\n");
		exit(1);
	}
	while(!feof(in))
    {
     ch=getc(in);
	 if(!feof(in)) putc(ch,out);	
    }
    fclose(in);
    fclose(out);
    return 0;
}
