#include<stdio.h>
#define size 2
#define sub 5

struct student
{
	char name[100];
	char dept[15];
	char course[10];
	int year;
	int roll;
};

void input(struct student *s)
{
	int j;
	
	fflush(stdin);
	printf("Enter Name : ");
	scanf("%[^\n]",s->name);
	printf("Enter Roll : ");
	scanf("%d",&s->roll);
	fflush(stdin);
	printf("Enter Dept. : ");
	scanf("%[^\n]",s->dept);
	fflush(stdin);
	printf("Enter Course : ");
	scanf("%[^\n]",s->course);
	fflush(stdin);
	printf("Enter Year : ");
	scanf("%d",&s->year);
}

void year(struct student *s,int y)
{
	int i;
	if(s->year==y)
		printf("%s\n",s->name);
}

void roll(struct student *s,int r)
{
	if(s->roll==r)
	{
		printf("Name : %s\n",s->name);
		printf("Roll : %d\n",s->roll);
		printf("Course : %s\n",s->course);
		printf("Dept. : %s\n",s->dept);
		printf("Year : %d\n",s->year);
	}
		
}

int main()
{
	struct student s[size];
	int i,j,c,y,r;
	for(i=0;i<size;i++)
	{
		printf("Enter Student %d details : \n",i+1);
		input(&s[i]);
	}
	printf("1 - Find names of students who joined in a particular year.\n");
	printf("2 - Find data of student.\n");
	printf("Enter your choice : ");
	scanf("%d",&c);
	if(c==1)
	{
		printf("Enter Year : ");
		scanf("%d",&y);
		for(i=0;i<size;i++)
		{
			year(&s[i],y);
		}
	}
	else if(c==2)
	{
		printf("Enter Roll : ");
		scanf("%d",&r);
		for(i=0;i<size;i++)
		{
			roll(&s[i],r);
		}
	}
	else
		printf("Wrong Choice...\n");
}
