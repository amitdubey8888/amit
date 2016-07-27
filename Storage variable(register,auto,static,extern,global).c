#include<stdio.h>
void f(void);
int g=30;
int e=20;
	int main()
	{
		int i;
		extern int e;           
		static int s;              
		register int r=50;
		auto int a=60;         
		for(i=0;i<10;i++) f();
		printf("%d ",e);
		printf("%d ",s);
		printf("%d ",r);
		printf("%d ",a);
		printf("%d ",g);
		return 0;
	}
	void f(void)
	{
	    static int j=10;
		printf("%d ",j);
		printf("%d ",e);
		printf("%d ",g);              
		j++;
	}
/*  Extern e - By default take 0. Scope is global.
    Static s - By default take 0.Scope is local.Each time value is changes when function is called.
    Register r - By default take garbage.Scope is local.
	Auto a - By default take garbage.Scope is local.   
	Global g - By default take garbage.Scope is global.*/ 
