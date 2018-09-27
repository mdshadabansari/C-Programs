#include<stdio.h>
void main()
{
	int x,i,j,f;
	float s=0,t;
	printf("Enter x: ");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		f=1;
		t=1;
		for(j=1;j<=i;j++)
		{
			t=t*f;
			f=f+2;
		}
		s=s+t;
	}
	printf("Sum is: %.2f\n\n",s);
}
