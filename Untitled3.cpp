#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\different.txt","w");
	char name;
	printf("Enter data:");
	do
	{
		scanf("%c",&name);
		if(name=='$')
		{
			break;
		}
		fputc(name,fptr);
	}while(1);
	
}
