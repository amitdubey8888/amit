#include<iostream>
#include<strstream>
using namespace std;
int main()
{
	char s[]="10.23 this is a test <<>><<?!\n";
	istrstream ins(s);
	char ch;
	ins.unsetf(ios::skipws);
	while(ins)
	{
		ins>>ch;
		cout<<ch;
	}
	return 0;
}
