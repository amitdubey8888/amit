#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in("Test");
	/*if(!in)
	{
		cout<<"Can not open file."<<endl;
		return 1;
	}*/
	in.ignore(10, ' ');
	char c;
	while(in)
	{
		in.get(c);
		if(in) cout<<c;
	}
	in.close();
	return 0;
}
