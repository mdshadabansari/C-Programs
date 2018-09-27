#include<stdio.h>
#include<math.h>
void main()
{
	int c,i;
	float p,r,t,a,interest,temp;
	printf("1 - Compound Interest\n2 - Interest\nEnter your choice: ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("Enter principal: ");
			scanf("%f",&p);
			printf("Enter rate: ");
			scanf("%f",&r);
			printf("Enter time: ");
			scanf("%f",&t);
			a=p;
			for(i=1;i<=(int)t;i++)
			{
				interest=(a*r)/100;
				a=a+interest;
				printf("Amount at the end of %d year is %.2f\n",i,a);
			}
			break;
		case 2:
			printf("Enter principal : ");
			scanf("%f",&p);
			printf("Enter time: ");
			scanf("%f",&t);
			printf("Enter amount: ");
			scanf("%f",&a);
			
			temp=pow((a/p),(1/t));
			interest=(temp*100)-100;
			printf("Interest rate: %.2f\n",interest);
			break;
			
		default:
			printf("Wrong choice...\n\n");
	}
}
