#include<iostream>
using namespace std;
int main()
{
	bool b;
	b=true;
	cout<<b<<" "<<boolalpha<<b<<endl;
	cout<<"Enter a boolean value: ";
	cin>>boolalpha>>b;
	cout<<"Here what is you entered: "<<b;
	return 0;
}
