#include<iostream>
#include<cstring>
using namespace std;
void mystrcat(char *s1,char *s2,int len=-1);
int main()
{
	char str1[100]="This is a test. ";
	char str2[100]="0123456789";
	mystrcat(str1,str2,5);
	cout<<str1<<endl;
	strcpy(str1,"This is a test. ");
	mystrcat(str1,str2);
	cout<<str1<<endl;
	return 0;
}
void mystrcat(char *s1,char *s2,int len)
{
	while(*s1) s1++;
	if(len==-1) len=strlen(s2);
	while(*s2 && len)
	{
		*s1=*s2;
		s1++;
		s2++;
		len--;
	}
	*s1='\0';
}
