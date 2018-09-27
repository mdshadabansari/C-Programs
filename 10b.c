#include<stdio.h>
#include<math.h>
void main()
{
	float s,c,l,x,r;
	int i,j,sum=1,t;
	printf("Enter degree: ");
	scanf("%f",&x);
	r=(3.14*x)/180;
	printf("Sin(%f) : %.2f\n",x,sin(r));
	printf("Cos(%f) : %.2f\n",x,cos(r));
	printf("Log(%f) : %.2f\n",x,log(x));
} 
