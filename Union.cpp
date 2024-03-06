#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int mark;
	
};
struct student s[2],temp;
int main()
{
	printf("ENter Student rno name and mark");
	for(int i=0;i<2;i++)
	{
		scanf("%d %s %d",&s[i].rno,s[i].name,&s[i].mark);
	}
	for(int i=0;i<2;i++)
	{
		for(int j=i+1;j<2;j++)
		{
	    	if(s[i].mark>s[j].mark)
	     	{
			 temp=s[i];
			 s[i]=s[j];
			 s[j]=temp; 
			}	
		}
	}
	for(int i=0;i<2;i++)
	{
		printf("\n %d\t%s\t%d",s[i].rno,s[i].name,s[i].mark);
	}
	
}
