#include<stdio.h>
int main()
{
	int c;	
	float a,b,s;
	printf("1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\nEnter choice: ");
	scanf("%d",&c);
	if(c>0&&c<5)
	{
		printf("Enter two numbers : \n");
		scanf("%f %f",&a,&b);
	}
	else
	{
		printf("Wrong input...\n\n");
		return -1;
	}
	
	
	switch(c)
	{
		case 1:
			s=a+b;
			printf("Result: %.2f",s);
			break;
		case 2:
			s=a-b;
			printf("Result: %.2f",s);
			break;
		case 3:
			s=a*b;
			printf("Result: %.2f",s);
			break;
		case 4:
			s=a/b;
			printf("Result: %.2f",s);
			break;
	}
	
	printf("\n\n");
}
