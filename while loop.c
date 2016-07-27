#include<stdio.h>
#include<string.h>
void pad(char *s, int length);
int main()
{
	char str[80];
	srtcpy(str, "This is a test");
	pad(str, 40);
	printf("%d ",strlen(str));
	return 0;
}
void pad(char *s, int length)
{
	int l;
	l=strlen(s);
	printf("%s",s);
	printf("%d",l);
	while(l<length)
	{
		s[l]=' ';
		l++;
	}
	s[l]='\0';
	printf("%s",strlen(s));
}

