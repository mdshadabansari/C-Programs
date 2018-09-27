#include<stdio.h>
void main()
{
	int n,t,r,m;
	printf("Enter a number: ");
	scanf("%d",&n);
	t=n;
	r=0;
	while(n!=0)
	{
		m=n%10;
		r=r*10+m;
		n=n/10;
	}
	printf("Reverse of the number is : %d\n",r);
	if(r==t)
		printf("\nPalindrome\n\n");
	else
		printf("\nNot palindrome\n\n");
}
