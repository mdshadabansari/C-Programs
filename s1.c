#include<stdio.h>
#define size 5
#define sub 5

struct student
{
	char name[100];
	int r;
	int m[sub];
	int tm;
	float am;
};

void input(struct student *s)
{
	int j;
	
	fflush(stdin);
	printf("Enter Name : ");
	scanf("%[^\n]",s->name);
	printf("Enter Roll : ");
	scanf("%d",&s->r);
	s->tm=0;
	for(j=0;j<sub;j++)
	{
		printf("Enter Subject %d Marks : ",j+1);
		scanf("%d",&s->m[j]);
		s->tm=s->tm+s->m[j];
	}
	s->am=(float)s->tm/sub;

/*	int i;
	printf("Name : %s\n",s.name);
	printf("Roll : %d\n",s.r);
	for(i=0;i<sub;i++)
	{
		printf("Subject %d Marks: %d\n",i,s.m[i]);
	}
	printf("Total Marks : %d\n",s.tm);
	printf("Average Marks : %f\n",s.am);*/
}

void display(struct student *s)
{
	int i;
	printf("Name : %s\n",s->name);
	printf("Roll : %d\n",s->r);
	for(i=0;i<sub;i++)
	{
		printf("Subject %d Marks: %d\n",i,s->m[i]);
	}
	printf("Total Marks : %d\n",s->tm);
	printf("Average Marks : %.3f\n\n\n",s->am);
	
}


int main()
{
	struct student s[size];
	struct student t;
	int i,j;
	for(i=0;i<size;i++)
	{
		printf("Enter Student %d details : \n",i+1);
		input(&s[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("Student %d details : \n",i+1);
		display(&s[i]);
	}
	
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(s[i].tm>=s[j].tm)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	
	printf("Student's detail in ascending order : \n\n");
	for(i=0;i<size;i++)
	{
		display(&s[i]);
	}
}
