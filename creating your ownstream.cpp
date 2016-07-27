#include<iostream>
#include<cstring>
using namespace std;
class phonebook{
	public:
		phonebook() {};
		char name[80];
		int areacode;
		int prefix;
		int num;
		phonebook(char *n, int a, int p, int nm)
		{
			strcpy(name, n);
			areacode=a;
			prefix=p;
			num=nm;
		}
		friend ostream &operator<<(ostream &straem, phonebook o);
		friend istream &operator>>(istream &stream, phonebook &o);
};
ostream &operator<<(ostream &stream, phonebook o)
{
	stream<<o.name<<" ";
	stream<<"("<<o.areacode<<")";
	stream<<o.prefix<<"-"<<o.num<<"\n";
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
	cout<<"\n";
	return stream;
}
int main()
{
	phonebook a;
	cin >> a;
	cout << a;
	return 0;
}

