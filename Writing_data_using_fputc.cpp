#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\Demo.txt","w");
	char ch;
	printf("Enter data:");
	do
	{
	 scanf("%c",&ch);
	 if(ch=='$')
	 {
	 	break;
		 }	
	fputc(ch,ptr);	 
	}while(1);
	fclose(ptr);
}
