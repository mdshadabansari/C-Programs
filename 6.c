#include<stdio.h>
void main()
{
	int n,p,c,i,j;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("The prime numbers between 1 - %d are : \n",n);
	for(i=2;i<=n;i++)
	{
		c=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==1)
			printf("%d\n",i);
	}
	
}
