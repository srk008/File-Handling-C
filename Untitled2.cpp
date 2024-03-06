#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],reverse[20];
	int i,j,k=0,d=0,len;
	printf("Enter any string");
	gets(name);
	len=strlen(name);
	for( i=0;i<=len;i++)
	{
		if(name[i]==' ' || name[i]=='\0')
		{
			for(j=i-1;j>=d;j--)
			{
				reverse[k]=name[j];
				k++;
			}
			reverse[k]=' ';
			//printf("%s ",reverse);
			d=i+1;
		}
	}
	printf("%s ",reverse);
}
