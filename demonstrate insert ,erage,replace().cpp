#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1("string handlling c++ style.");
	string str2(" STL power");
	cout<<"Initial string: "<<endl;
	cout<<"str1: "<<str1<<endl;
	cout<<"str2: "<<str2<<endl;
	cout<<"Insert str2 into str1. "<<endl;
	str1.insert(6,str2);
	cout<<str1<<endl;
	cout<<"Remove 9 character from str1. "<<endl;
	str1.erase(6,9);
	cout<<str1<<endl;
	cout<<"replace 8 character in str1 with str2. "<<endl;
	str1.replace(7,8,str2);
	cout<<str1<<endl;
	return 0;
}
