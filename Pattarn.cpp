#include<stdio.h>
int main()
{
	int a=65;
	for(int i=1;i<=5;i++)
	{
		a=65;
		for(int j=1;j<=9;j++)
		{
			if(j<=(i+i)-1)
			{
				printf("%c\t",a);
				a++;
			}
			
		}
		printf("\n");
	}
}
