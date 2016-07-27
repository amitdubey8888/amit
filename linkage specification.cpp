#include<iostream>
using namespace std;
extern "C" void myCfunc();
int main()
{
	myCfunc();
	return 0;
}
void myCfunc()
{
	cout<<"This links as a C function.\n";
}
