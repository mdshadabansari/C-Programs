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

void sort(int sa[][mc],int sr,int sc)
{
	int i,j,t,k=0;
	int temp[sr*sc];
	for(i=0;i<sr;i++)
	{
		for(j=0;j<sc;j++)
		{
			temp[k]=sa[i][j];
			k++;
		}
	}
	
	for(i=0;i<sr*sc-1;i++)
	{
		for(j=0;j<sr*sc-i-1;j++)
		{
			if(temp[j]>temp[j+1])
			{
				t=temp[j];
				temp[j]=temp[j+1];
				temp[j+1]=t;
				
			}
		}
	}
	/*for(i=0;i<k;i++)
		printf("%d ",temp[i]);*/
	
	k=0;
	for(i=0;i<sr;i++)
	{
		for(j=0;j<sc;j++)
		{
			sa[i][j]=temp[k];
			k++;
		}
	}
	
	print(sa,sr,sc);
}

void sum(int as1[][mc],int as2[][mc],int as3[][mc],int sr,int sc)
{
	int i,j;
/*	sort(as1,sr,sc);
	sort(as2,sr,sc);*/
	for(i=0;i<sr;i++)
	{
		for(j=0;j<sc;j++)
		{
			as3[i][j]=as1[i][j]+as2[i][j];
		}
	}
}

void print(int ap[][mc],int pr,int pc)
{
	int i,j;
	printf("\n\n");
	for(i=0;i<pr;i++)
	{
		for(j=0;j<pc;j++)
		{
			printf("%d ",ap[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int r,c;
	printf("Enter rows : ");
	scanf("%d",&r);
	printf("Enter columns : ");
	scanf("%d",&c);
	
	int a1[r][c],a2[r][c],a3[r][c];
	printf("\nEnter data into first array: \n");
	input(a1,r,c);
//	sort(a1,r,c);
	print(a1,r,c);
	
	printf("\nEnter data into second array: \n");
	input(a2,r,c);
	//sort(a2,r,c);
	print(a2,r,c);
	
	//sum(a1,a2,a3,r,c);
	
	printf("Sorted Matrix I : \n");
	sort(a1,r,c);
	printf("Sorted Matrix II : \n");
	sort(a2,r,c);
	sum(a1,a2,a3,r,c);
	printf("Sorted Matrix III ( Matrix I + Matrix II ) : \n");
	print(a3,r,c);
	
}


