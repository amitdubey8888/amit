#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1("alpha");
	string str2("beta");
	string str3("omega");
	string str4;
	str4=str1;
	cout<<str1<<"\n"<<str3<<endl;
	str4=str1+str2;
	cout<<str4<<endl;
	str4=str1+" to "+str3;
	cout<<str4<<endl;
	if(str3>str1) cout<<"str3>str1 ";
	if(str3==str1+str2) cout<<"str3=str1+str2";
	str1="This is a null terminated string.";
	cout<<endl;
	cout<<str1;
	string str5(str1);
	cout<<endl;
	cout<<str5;
	cout<<endl;
	cout<<"Enter a string : ";
	cin>>str5;
	cout<<str5;
	return 0;
}
