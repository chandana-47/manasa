int fact(int n)
{
	if (n==1)return 1;
	else 
	return n* fact (n-1);
}
void main()
{
	int n,retvalue;
		printf("enter a number below  10");
	    sacnf("%d",&n);
	retvalue =fact(n);
	printf("factioral is %d\n",retvalue);
}
#include<stdio.h>
int gcd(int n1,int n2)
void main()
{
		
	int n1,n2;
	printf("enter two positive integers:");
	scanf("%d%d",&n1,&n2);
	printf("G.C.D of %d.",n1,n2 gcd(n1,n2));
}
int gcd(int n1 ,int n2)
{
	if(n2!=0)
	return gcd(n2,n1,%n2);
	else
	return n1;
}
