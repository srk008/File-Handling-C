#include<stdio.h>
int main()
{
	FILE *c,*s,*d,*S,*fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\write111.txt","r");
	c =fopen("C:\\Users\\Admin\\Documents\\File Handling\\captial111.txt","w");
	s=fopen("C:\\Users\\Admin\\Documents\\File Handling\\small111.txt","w");
	d=fopen("C:\\Users\\Admin\\Documents\\File Handling\\digit_t111.txt","w");
	S=fopen("C:\\Users\\Admin\\Documents\\File Handling\\special111.txt","w");
	char ch;
	do
	{
		ch=fgetc(fptr);
		if(ch==-1)
		{
			break;
		}
		if(ch>=65 && ch<=90)
		{
			fputc(ch,c);
		}
		else if(ch>='a' && ch<='z')
		{
			fputc(ch,s);
		}
		else if(ch>='0' && ch<='9')
		{
			fputc(ch,d);
		}
	  else
	  {
	  	
		fputc(ch,S);
	  }
	}while(1);
	printf("Data  Writen done");
	
}
