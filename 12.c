#include<stdio.h>
void main()
{
	int a,b,g,d;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	
	do
	{
		if(a>b)
		{
			d=a-b;
			a=d;
		}
		else
		{
			d=b-a;
			b=d;
		}
		if(a%d==0 && b%d==0)
		{
			g=d;
			break;
		}
	}while(d>0);
	
	printf("GCD: %d\n\n",g);
}
