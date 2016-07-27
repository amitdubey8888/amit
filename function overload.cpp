#include<iostream>
#include<cstring>
using namespace std;
void stradd(char *s1, char *s2);
void stradd(char *s1, int i);
int main()
{
	char str[100];
	strcpy(str, "Hello ");
	stradd(str, "Amit ");
	cout<<str<<endl;
	stradd(str, 100);
	cout<<str<<endl;
	return 0;
}
void stradd(char *s1, char *s2)
{
	strcat(s1, s2);
}
void stradd(char *s1,int i)
{
	char temp[100];
	sprintf(temp, "%d", i);
	strcat(s1, temp);
}
