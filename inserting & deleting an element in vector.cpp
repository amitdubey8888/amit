#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char> v(10);
	vector<char> v2;
	char str[]="<vector>";
	unsigned int i;
	for(i=0;i<10;i++) v[i]=i+'a';
	for(i=0;i<str[i];i++) v2.push_back(str[i]);
    cout<<"Original contents : ";
	for(i=0;i<10;i++) cout<<v[i]<<" ";	
	cout<<endl<<endl;
	vector<char>::iterator p=v.begin();
	p+=2;
	v.insert(p,10,'x');
	cout<<"Size after inserting x is = "<<v.size()<<endl;
	cout<<"Contents after insert :";
	for(i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl<<endl;
	p=v.begin();
	p+=2;
	v.erase(p,p+10);
	cout<<"Size after erage = "<<v.size()<<endl;
	cout<<"Contents after erase : ";
	for(i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl<<endl;
	v.insert(p,v2.begin(),v2.end());
	cout<<"Size after v2's insertion = ";
	cout<<v.size()<<endl;
	cout<<"Contents after insert : ";
	for(i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}
