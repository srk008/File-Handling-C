#include<stdio.h>
int main()
{
	FILE *even,*odd,*fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\different.txt","r");
	even=fopen("C:\\Users\\Admin\\Documents\\File Handling\\even.txt","w");
	odd=fopen("C:\\Users\\Admin\\Documents\\File Handling\\odd.txt","w");
	char name;
	
	do
	{
		name=fgetc(fptr);
		if(name==-1 || name=='\0')
		{
			break;
		}
		if(name>=48 && name<=57)
		{
			if(name%2==0)
			{
				fputc(name,even);
			}
			else
			{
				fputc(name,odd);
			}
		}
	}while(1);
	printf("Data is Stored Succesfully transpered");
}
