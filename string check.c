#include<stdio.h>
#include<string.h>
int main()
{
	char s1[80],s2[80];
	int x;
	printf("Enter both string...\n");
	gets(s1);
	gets(s2);
	printf("Lengths : %d   %d\n",strlen(s1),strlen(s2));
	if(x=strcmp(s1,s2))
	{                                  
	    if(x>0) printf("First string is larger \n ");
	    else if(x<0) printf("Second is largst\n");
	    else printf("Strings are equal\n");
    }
	strcat(s1,s2);
	printf("%s\n",s1);
	strcpy(s1,"This is a test.\n");
	printf(s1);
	if(strchr("Hello",'e')) printf("E is in Hello\n");
	if(strstr("hello how are U?","how")) printf("Match Found");
	return 0;
}
