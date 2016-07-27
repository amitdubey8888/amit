#include<iostream>
using namespace std;
class GCD
{
	public:
		int i,temp;
		GCD(int x,int y)
		{
				for(i=2;i<=(x,y);i++)
				{
					while(1)
					{
						if(((x%i)==0)&&((y%i)==0))
						{
							x=x/i;
							y=y/i;
							temp=temp*i;
						}
						else
						{
							break;
						}
					}
				}	
		 cout<<"GCD of two number = "<<temp;
    	}
};
int main()
{
	int x,y;
	cout<<"Enter two number...."<<endl;
	cin>>x>>y;
	GCD ob(x,y);
	return 0;
}


