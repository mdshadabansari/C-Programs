#include<stdio.h>
#include<string.h>
#define size 100

int main()
{
	FILE *f;
	char ch,s1[size],s2[size];
	int i,j,k;
	f=fopen("reverse.txt","r");
	if(f==NULL)
	{
		printf("File cannot be opened...");
		exit(0);
	}
	i=0;
	while(1)
	{
		ch=getc(f);
		if(ch==EOF)
			break;
		s1[i]=ch;
		i++;
	}
	j=i-1;
	k=0;
	while(j>=0)
	{
		s2[k]=s1[j];
		k++;
		j--;
	}
	s2[k]='\0';
	printf("Original string : \n%s\nReverse String : \n%s\n",s1,s2);
	if(strcmp(s1,s2)==0)
		printf("Both strings are equal...\n");
	else
		printf("Strings are not equal...");
	fclose(f);
}
