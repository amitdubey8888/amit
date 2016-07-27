#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
bool divideby3(int i)
{
	if((i%3)==0) return true;
	else return false;
}
int main()
{
	vector<int> v;
	for(i=1;i<20;i++) v.push_back(i);
	cout<<"Sequence : "<<endl;
	cout<<for(i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
	i=count_if(v.begin(), v.end(),divideby3);
	cout<<i<<"Numbers are divisble by 3."<<endl;
	return 0;
}
