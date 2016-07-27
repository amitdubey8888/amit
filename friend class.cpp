#include<iostream>
using namespace std;
int IDLE = 0;
int INUSE = 1;
class c2;
class c1
{
	int status;
	public:
		void setstatus(int state);
		friend int idle(c1 a,c2 b);
};
class c2
{
	int status;
	public:
		void setstatus(int state);
		friend int idle(c1 a,c2 b);
};
void c1::setstatus(int state)
{
	status=state;
}
void c2::setstatus(int state)
{
	status=state;
}
int idle(c1 a,c2 b)
{
	if(a.status || b.status) return 0;
	else return 1;
}
int main()
{
	c1 x;
	c2 y;
	x.setstatus(IDLE);
	y.setstatus(IDLE);
	if(idle(x,y)) cout<<"Screen can be used."<<endl;
	else cout<<"In use."<<endl;
	x.setstatus(INUSE);
	if(idle(x,y)) cout<<"Screen can be used."<<endl;
	else cout<<"In use."<<endl;
	return 0;
}
