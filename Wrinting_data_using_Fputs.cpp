#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\Demo1.txt","w");
	char s[20];
	printf("ENter your Data:");
	do
	{
		gets(s);
		if(s[0]=='$')
		{
			break;
		}
		fputs(s,fptr);
	}while(1);
	printf("File Created Succssfully");
	fclose(fptr);
}
