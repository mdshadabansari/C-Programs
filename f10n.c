#include<stdio.h>

#define size 100

int slen(char s[])
{
	int i=0;
	char ch;
	
	while(s[i]!='\0')
	{
		i++;
	}
	return i;
}

void scopy(char id[],char is[])
{
	int i,l1=0;
	while(is[l1]!='\0')
	{
		l1++;
	}
	
	for(i=0;i<l1;i++)
	{
		id[i]=is[i];
	}
	id[i]='\0';
}

void scat(char s1[],char s2[])
{
	int l1,l2,n,i,k;
	l1=slen(s1);
	l2=slen(s2);
	n=l1+l2;
	k=0;
	
	for(i=l1;i<n;i++)
	{
		s1[i]=s2[k];
		k++;
	}
	s1[n]='\0';
}

void srev(char s[])
{
	int l1=slen(s);
	char t[l1];
	int i,n=l1-1;
	for(i=0;i<l1;i++)
	{
		t[i]=s[n];
		n--;
	}
	t[l1]='\0';
	printf("Reversed String :\t%s\n\n",t);
}

int scomp(char s1[],char s2[])
{
	int l1,l2,i,f=0;
	l1=slen(s1);
	l2=slen(s2);
	for(i=0;i<l1||i<l2;i++)
	{
		if(s1[i]<s2[i])
		{
			f=s1[i]-s2[i];
			break;
		}
		else if(s1[i]>s2[i])
		{
			f=s1[i]-s2[i];
			break;
		}
	}
	
	return f;
}


int main()
{
	int c,n;
	char s1[size],s2[size];
	do
	{		
		printf("1 - strlen (To find length of any string)\n");
		printf("2 - strcpy (To copy String 2 to String 1)\n");
		printf("3 - strcat (To concatenate two strings)\n");
		printf("4 - strrev (To reverse the string)\n");
		printf("5 - strcmp (To compare two strings)\n");
		printf("0 - Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&c);
		fflush(stdin);
		switch(c)
		{
			case 1:
				printf("Enter a string : ");
				scanf("%[^\n]",s1);
				printf("Length of string : %d\n\n",slen(s1));
				break;
			case 2:
				printf("Enter a string : ");
				scanf("%[^\n]",s1);
				scopy(s2,s1);
				printf("\nString Copied...\nString: %s\n\n",s2);
				break;
			case 3:
				printf("Enter String 1 : ");
				scanf("%[^\n]",s1);
				fflush(stdin);
				printf("Enter String 2 : ");
				scanf("%[^\n]",s2);
				scat(s1,s2);
				printf("Concatenated String:\t%s\n\n",s1);
				break;
			case 4:
				printf("Enter String 1 : ");
				scanf("%[^\n]",s1);
				srev(s1);
				break;
			case 5:
				printf("Enter String 1 : ");
				scanf("%[^\n]",s1);
				fflush(stdin);
				printf("Enter String 2 : ");
				scanf("%[^\n]",s2);
				n=scomp(s1,s2);
				printf("\n%d\n\n",n);
				break;
			case 0:
				exit(1);
			default:
				printf("Wrong Input... Try Again...\n\n");
				
		}
		printf("\n\n");
	}while(c!=0);
	
}
