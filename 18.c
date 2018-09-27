#include<stdio.h>
int main()
{
	int x,s=0,t,a;
	printf("Enter the number: ");
	scanf("%d",&x);
	
	t=x;
	while(t!=0)
	{
		a=t%10;
		s=(s*10)+a;
		t=t/10;
	}
	t=s;
	while(t!=0)
	{
		a=t%10;
		switch(a)
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
		t=t/10;
				
	}
	printf("\n\n");
}
	
	
