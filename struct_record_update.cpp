#include<stdio.h>
#include<string.h>
struct name
{
	int id;
	char name[20];
	int salary;
	
	
};
struct name n[5];
int main()
{
	int check,t=0,z;
	char nam[20];
	printf("Enter student id name and salary:");
	for(int i=0;i<5;i++)
	{
		scanf("%d %s %d",&n[i].id,n[i].name,&n[i].salary);
	}
	printf("Enter student id that you want to update:");
	scanf("%d",&check);
	for(int i=0;i<5;i++)
	{
		if(n[i].id==check)
		{
			printf("ENter New student id name salary:");
			scanf("%d %s %d",&n[i].id,n[i].name,&n[i].salary);
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("\n %d %s %d",n[i].id,n[i].name,n[i].salary);
	}
	printf("Enter name that record you want to delete:");
	scanf("%s",nam);
	for(int i=0;i<5;i++)
	{
		 
		if(strcmp(n[i].name,nam)==0)
		{
			for(int j=i;j<5;j++)
			{
				n[j]=n[j+1];
			}
		t++;	
		}
	}
	for(int i=0;i<5-t;i++)
	{
		printf("\n %d %s %d",n[i].id,n[i].name,n[i].salary);
	}
}
