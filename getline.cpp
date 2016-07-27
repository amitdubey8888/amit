#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		cout<<"Usage: display<filename>"<<endl;
		return 1;
	}
	ifstream in(argv[1]);
	if(!in)
	{
		cout<<"Can not open file."<<endl;
		return 1;
	}
	char str[255];
	while(in)
	{
		in.getline(str, 255);
		if(in) cout<<str<<endl;
	}
	in.close();
	return 0;
}
