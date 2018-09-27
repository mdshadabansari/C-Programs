#include<stdio.h>
void main()
{
	int c=0,pr=1,n,i,j,odd,evn,rod=0,revn=0;
	printf("Enter two numbers:\n");
	scanf("%d%d",&odd,&evn);
	for(i=n;i>0;i=i/10)
		c++;
	for(i=odd;i>0;i=i/10)
		rod=rod*10+i%10;
	for(i=evn;i>0;i=i/10)
		revn=revn*10+i%10;
	i=1;
	printf("Output is:");
	while(rod!=0||revn!=0)
	{
		if(i%2!=0&&rod!=0)
			printf("%d",rod%10);
		else if(revn!=0)
			printf("%d",revn%10);
		rod=rod/10;
		revn=revn/10;
		i++;
	}
	printf("\n");
}
