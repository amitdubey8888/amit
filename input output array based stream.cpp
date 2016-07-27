#include<iostream>
#include<strstream>
using namespace std;
int main()
{
	char iostr[100];
	strstream strio(iostr, sizeof(iostr), ios::in | ios::out);
	int a,b;
	char str[100];
	strio<<"10 20 testing ";
	strio>>a>>b>>str;
	cout<<a<<" "<<b<<" "<<str<<endl;
	return 0;
	
}
