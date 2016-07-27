#include<iostream>
using namespace std;
int main()
{
  int i,x,y,p,q,gcd;
  gcd=1;
  cout<<"Enter value of x & y........."<<endl;
  cin>>x>>y;
  cout<<"X="<<x<<"  "<<"Y="<<y<<endl;
  for(i=2;i<=(x,y);i++)
  {
		 while(1)
		  {
		   	 if(((y%i)==0)&&((x%i)==0))
		   	 {
		   	 	x=x/i;
		   	 	y=y/i;
		   	 	gcd=gcd*i;
			 }
			 else
			 {
			 	break;
			 }
          } 
	    
  }
  cout<<"GCD of two number = "<<gcd;
	return(0);
}
