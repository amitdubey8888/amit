#include<iostream>
using namespace std;
class gcd
{
	public :
	        int temp=1,i; 
	        int compute(int x,int y)
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
   	        return temp;
	        }				 
			int display()
		    {
			cout<<"GCD of number = "<<temp; 
		    }
};
int main()
{
	int x,y;
	cout<<"Enter two number........"<<endl;
	cin>>x>>y;
	gcd a;
	a.compute(x,y);
	a.display();
	return 0;
}
