#include<stdio.h>
int main()
{
	int a,b,x;
	float c,d;
	a=8;
	b=8;
	if(x=(a>b?a:b)) printf("%d \n",x);                                  /*ternary operator*/
	if(a&&b) printf("Hi\n");                                            /*condition will be true except 0*/
	a=a<<1;                                                             /*left shift <<. Insert 0 towards right side in equal no of shift*/
	printf("%d \n",a);                                                 
	a=a<<2;
	printf("%d \n",a);
	a=a<<3;
	printf("%d \n",a);
	a=a>>3;                                                             /*right shift >>.Inssert 0 towards left side in equal no of shift*/
	printf("%d \n",a);
	a=a>>2;
	printf("%d \n",a);
	c=6.789;
	printf("%0.5f \n",c);                                              /*Dos'nt matter integer value only fraction will be taken into account*/
	printf("%9d \n",b);                                                /*Dos'nt matter fraction value only integer will be taken into account & shift right by inserting o*/
	printf("%d \n",sizeof(int));
	printf("%d %d %d \n",a|b,a&b,!a); 
	return 0;
}
