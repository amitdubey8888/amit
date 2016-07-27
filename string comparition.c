#include<stdio.h>
#include<string.h>
int compare(char a[100],char b[100]); 
int main()
{
	int x;
	char s1[100],s2[100];
	printf("Enter both string:\n");
	gets(s1);
	gets(s2);
	x=strcmp(s1,s2);
	if(!x) printf("Strings are equal.\n");
	else printf("Strings are not equal.\n");
	return 0;
}

int compare(char a[100],char b[100])
{
	int x;
	x=strcmp(a,b);
	printf("Comparing strings.....\n");
	return x;
}
