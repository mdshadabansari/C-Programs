#include<stdio.h>
void main()
{
	int a,b,t,l;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	
	t=(a>b)?a:b;
	
	do
	{
		if(t%a==0 && t%b==0)
		{
			l=t;
			break;
		}
		else
			t++;
	}while(t<1000);
	
	printf("LCM: %d\n\n",l);
}
	
