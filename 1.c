#include<stdio.h>

int main()
{
	FILE *s,*t;
	char ch;
	s=fopen("sample.txt","r");
	if(s==NULL)
	{
		printf("File cannot be opened...\n");
		exit(1);
	}
	t=fopen("new.txt","w");
	if(t==NULL)
	{
		printf("File cannot be opened...\n");
		exit(0);
	}
	while(1)
	{
		ch=getc(s);
		if(ch==EOF)
			break;
		putc(ch,t);
		//printf("%c",ch);
	}
	fclose(s);
	fclose(t);
}
