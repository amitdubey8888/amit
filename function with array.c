#include<stdio.h>
#include<string.h>
void printupper(char *string);
int main()
{
	char s[100];
	printf("Enter string\n");
	gets(s);
	printupper(s);
	printf("\n s is is now upper case : %s",s);
	return 0;
}
void printupper(char *string)
{
	register int t;
	for(t=0;string[t];++t)
	{
		string[t]=toupper([t]);
		putchar(string[t]);
	}
}
