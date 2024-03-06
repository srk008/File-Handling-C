#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\Demo11.txt","w");
	char name[20];
	int id;
	printf("ENter student id and name:");
	do
	{
		fprintf(fptr,"%s %d",name,id);
		if(name[0]=='$')
		break;
		scanf("%s %d",name,&id);
	}while(1);
	fclose(fptr);
}
