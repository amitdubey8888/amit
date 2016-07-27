#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class phonebook
{
	char name[100];
	char areacode[5];
	char prefix[5];
	char num[10];
	public:
		phonebook() {};
		phonebook(char *n, char *a, char *p, char *nm)
		{
			strcpy(name,n);
			strcpy(areacode,a);
			strcpy(prefix,p);
			strcpy(num,nm);
		}
		friend ostream &operator<<(ostream &stream, phonebook o);
	    friend istream &operator>>(istream &stream,phonebook &o);
};
ostream &operator<<(ostream &stream, phonebook o)
{
	stream<<o.name<<" ";
	stream<<"("<<o.areacode<<") ";
	stream<<o.prefix<<"-";
	stream<<o.num<<"\n";
	return stream;
}
istream &operator>>(istream &stream, phonebook &o)
{
	cout<<"Enter name: ";
	stream>>o.name;
	cout<<"Enter area code: ";
	stream>>o.areacode;
	cout<<"Enter prefix: ";
	stream>>o.prefix;
	cout<<"Enter number: ";
	stream>>o.num;
	cout<<endl;
	return stream;
}
int main()
{
	phonebook a;
	char c;
	fstream pb("phone", ios::in | ios::out | ios::app);
	if(!pb)
	{
		cout<<"can not open phone book file."<<endl;
		return 1;
	}
	for(;;)
	{
		do{
			cout<<"1. Enter numbers\n";
			cout<<"2. Display numbers\n";
			cout<<"3. Quit\n";
			cout<<"\nEnter a choice: ";
			cin>>c;
		}while(c<'1' || c>'3');
		switch(c)
		{
			case '1':
				cin>>a;
				cout<<"Entry is: ";
				cout<<a;
				pb<<a;
				break;
			case '2':
				char ch;
				pb.seekg(0,ios::beg);
				while(!pb.eof())
				{
					pb.get(ch);
					if(!pb.eof()) cout<<ch;
				}
				pb.clear();
				cout<<endl;
				break;
			case'3':
				pb.close();
				return 0;
		}
	}
}
