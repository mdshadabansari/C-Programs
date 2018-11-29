#include<stdio.h>

int main()
{
	FILE *s,*t;
	char ch;
	s=fopen("file1.txt","a");
	t=fopen("file2.txt","r");
	if(s==NULL || t==NULL)
	{
		printf("File cannot be opened...");
		exit(0);
	}
	
	while(1)
	{
		ch=getc(t);
		if(ch==EOF)
			break;
		putc(ch,s);
	}
	fclose(s);
	fclose(t);
	s=fopen("file1.txt","r");
	if(s==NULL)
	{
		printf("File cannot be opened...");
		exit(0);
	}
	
	printf("Contents after appending : \n\n");
	while(1)
	{
		ch=getc(s);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(s);
	fclose(t);
}
