#include<stdio.h>

#define mr 10
#define mc 10

void input(int ia[][mc],int ir,int ic)
{
	int i,j;
	for(i=0;i<ir;i++)
	{
		for(j=0;j<ic;j++)
		{
			printf("Enter data for %d th row and %d the column :  ",i,j);
			scanf("%d",&ia[i][j]);
		}
	}
}

void display(int ap[][mc],int pr,int pc)
{
	int i,j;
	printf("\n\n");
	for(i=0;i<pr;i++)
	{
		for(j=0;j<pc;j++)
		{
			printf("%d \t",ap[i][j]);
			
		}
		printf("\n");
	}
}

void transpose(int ta[][mc],int tp[][mc],int tr,int tc)
{
	int i,j,nr,nc;
	//int tp[tc][tr];
	nr=tc;
	nc=tr;
	for(i=0;i<tr;i++)
	{
		for(j=0;j<tc;j++)
		{
			tp[j][i]=ta[i][j];
		}
	}
	
/*	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			printf("%d\t ",tp[i][j]);
		}
		printf("\n");
	}*/
	
	/*printf("Transpose Matrix : \n");
	display(tp,nr,nc);*/
}

void multiply(int ma[][mc],int mt[][mc],int mm[][mc],int mpr,int mpc)
{
	int i,j,k,sum,r,c;
	r=mpr;
	c=mpr;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=0;
			for(k=0;k<c;k++)
			{
				sum=sum+ma[i][k]*mt[k][j];
				mm[i][j]=sum;
			}
			//mm[i][j]=sum;
		}
	}
}

int main()
{
	int r,c;
	printf("Enter rows : ");
	scanf("%d",&r);
	printf("Enter columns : ");
	scanf("%d",&c);
	
	int a1[r][c],t[c][r],m[r][c];
	
	printf("\nEnter data into Matrix : \n");
	input(a1,r,c);
	
	printf("Original Matrix : \n");
	display(a1,r,c);
	transpose(a1,t,r,c);
	
	printf("Transpose Matrix : \n");
	display(t,c,r);
	
	multiply(a1,t,m,r,c);
	display(m,r,c);
}

