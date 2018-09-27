#include<stdio.h>
int main()
{
	int n,f,i,t,r;
	printf("Enter a number: ");
	scanf("%d",&n);
	t=n;
	for(i=0;i<10;i++)
	{
		t=n;
		f=0;
		while(t!=0)
		{
			r=t%10;
			if(r==i)
			{
				f++;
			}
			t=t/10;
		}
		if(f>0)
			printf("%d appears %d times\n",i,f);
	
	}
}
