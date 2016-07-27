#include<iostream>
#include<vector>
#include<cstdlib>
#include <bits/stl_tempbuf.h>  // for _Temporary_buffer
#include<algorithm>
using namespace std;
int main()
{
	vector<bool> v;
	unsigned int i;
	for(i=0;i<10;i++)
	{
		if(i%2) v.push_back(true);
		else v.push_back(false);
	}
	cout<<"Sequence : "<<endl;
	for(i=0;i<v.size();i++)
	{
		cout<<boolalpha<<v[i]<<" ";
		cout<<endl;
	}
	i=count(v.begin(), v.end(),true);
	cout<<i<<"Elements are true."<<endl;
	return 0;
}
