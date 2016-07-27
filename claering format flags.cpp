#include<iostream>
using namespace std;
int main()
{
	cout.setf(ios::uppercase | ios::scientific);
	cout<<100.12;
	cout.unsetf(ios::uppercase);
	cout<<endl;
	return 0;
}
