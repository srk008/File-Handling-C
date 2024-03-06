#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\Demo.txt","r");
	char ch;
	do{
		ch=fgetc(fptr);
		if(ch==-1)
		{
			break;
		}
		printf("%c",ch);
	}while(1);
}
