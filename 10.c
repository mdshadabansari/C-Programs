#include<stdio.h>
void main()
{
	float s=0;
	int n,i,j,f;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		s=s+(float)i/f;
	}
	printf("Sum: %f\n\n",s);
}
