#include<stdio.h>
struct Player
{
	int jersyno,run,matches;
	char name[20];
};
struct Player p[5],temp;
int main()
{
	int size=5,index;
	for(int i=0;i<size;i++)
	{
		printf("ENter Player jersyno run matches and name");
		scanf("%d %d %d %s",&p[i].jersyno,&p[i].run,&p[i].matches,p[i].name);
	}
	for(int i=0;i<size;i++)
	{
		printf("\n %d\t%d\t%d\t%s",p[i].jersyno,p[i].run,p[i].matches,p[i].name);
	}
	printf("\nENter Index that you want to delete:");
	scanf("%d",&index);
	for(int i=0;i<size;i++)
	{
		if(i==index)
		{
			for(int j=i;j<size;j++)
			{
				p[j]=p[j+1];
			}
			size--;
		}
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(p[i].matches>p[j].matches)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		printf("\n %d\t%d\t%d\t%s",p[i].jersyno,p[i].run,p[i].matches,p[i].name);
	}
}
