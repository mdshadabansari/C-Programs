#include<stdio.h>

int main()
{
	FILE *s,*t;
	char ch,u;
	s=fopen("sample.txt","r");
	t=fopen("new.txt","w");
	if(s==NULL || t==NULL)
	{
		printf("File cannot be opened...\n");
		exit(0);
	}
	
	while(1)
	{
		ch=getc(s);
		if(ch==EOF)
			break;
		
		if(ch>=97&&ch<=122)
		{
			u=(char)(ch-32);
		}
		else
			u=ch;
		putc(u,t);
	//	printf("%c",u);
	}
	
	fclose(t);
	t=fopen("new.txt","r");
	if(t==NULL)
	{
		printf("File cannot be opened...\n");
		exit(0);
	}
	
	while(1)
	{
		ch=getc(t);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(s);
	fclose(t);
}
