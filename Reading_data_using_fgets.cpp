#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\Demo1.txt","r");
	char s[20];
	do
	{
		fgets(s,2,fptr);
		if(s[0]=='NULL')
		{
			break;
		}
		if(s[0]=='\0')
		{
			break;
		}
		printf("%s",s);
	}while(1);
}
