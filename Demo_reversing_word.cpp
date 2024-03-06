#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],m[20];
	int len,j,k=0,d=0;
	printf("Enter any name:");
	gets(name);
	len=strlen(name);
	for(int i=0;i<=len;i++)
	{
		if(name[i]==' ' || name[i]=='\0')
		{
			for(j=i-1;j>=d;j--)
			{
				m[k]=name[j];
				k++;
			}
		m[k]='\0';
	//	printf("%s ",m);
			d=i+1;
			
		}
		
	}
	printf("%s\t ",m);
}
