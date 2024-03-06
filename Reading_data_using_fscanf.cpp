#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("C:\\Users\\Admin\\Documents\\File Handling\\Demo11.txt","r");
	char name[20];
	int id;
	while(fscanf(fptr,"%s %d",name,&id)==2)
	{
		printf("%s  %d  \n",name,id);
	}
	fclose(fptr);
}
