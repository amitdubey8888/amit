#include<iostream>
using namespace std;
void showflags();
int main()
{
	showflags();
	cout.setf(ios::right | ios::showpoint | ios::fixed);
	showflags();
	return 0;
}
void showflags()
{
	ios::fmtflags f;
	long i;
	f=(long)cout.flags();
	for(i=0x4000;i;i=i>>1)
	{
		if(i&f) cout<< "1 ";
		else cout<<"0 ";
		cout<<endl;
	}
}
