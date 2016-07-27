#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	if(argc=2)
	{
		cout<<"Usage: output <filename>"<<endl;
		return 1;
	}
	ofstream out(argv[1]);
	if(!out)
	{
		cout<<"Can not open file."<<endl;
		return 1;
	}
	char str[50];
	cout<<"write strings to disk, enter ! to stop."<<endl;
	do{
		cout<<": ";
		cin>>str;
		out<<str<<endl;
	}while(*str!='!');
	out.close();
	return 0;
}
