#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\write111.txt","w");
	char ch;
	printf("Enter Data:");
	do{
		scanf("%c",&ch);
		if(ch=='$')
		{
			break;
		}
		fputc(ch,fptr);
		
	}while(1);
	fclose(fptr);
	printf("Data write susceessfully");
}
