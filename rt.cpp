#include<stdio.h>
int main()
{
	char name[20],res[20];
	int i=0,j,len=0;
	printf("Enter any string:");
	gets(name);
	while(name[len]!='\0')
	{
		len++;
	}
	printf("\nLength is %d",len);
	while(len>0)
	{
		len--;
		res[i]=name[len];
		i++;
	}
	res[i]='\0';
	printf("\nYour Reversed String is %s",res);
	
	
}
