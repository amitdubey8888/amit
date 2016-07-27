#include<iostream>
#include<fstream>
using namespace std;
void checkstatus(ifstream &in);
int main(int argc, char *argv[])
{
		if(argc!=2)
		{
			cout<<"Usage: Display <filename>"<<endl;
			return 1;
		}
        ifstream in(argv[1]);
        if(!in)
        {
        	cout<<"Can not open input file."<<endl;
        	return 1;
		}
		char c;
		while(in.get(c))
		{
			if(in) cout<<c;
			checkstatus(in);
		}
		checkstatus(in);
		in.close();
		return 0;
}
void checkstatus(ifstream &in)
{
	ios::iostate i;
	i=in.rdstate();
	if(i & ios::eofbit)
	cout<<"EOF encountered"<<endl;
	else if(i & ios::failbit)
	cout<<"Non-fatal I/O error"<<endl;
	else if(i & ios::badbit)
	{
 	cout<<"Fatal I/O error"<<endl;
	}
}
