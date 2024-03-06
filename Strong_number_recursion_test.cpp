#include<stdio.h>
int temp;
int strong(int digit,int res,int p)
{
//	static int res,output;
	if(p<=digit)
	{
		res=res*p;
		p++;
		strong(digit,res,p);
	}
	return res;
}
int check(int num)
{
	int output;

	if(num!=0)
	{
	 int digit=num%10;
	 int p=1,res=0;
	output=output*10+ strong(digit,res,p);
//	printf("Output is %d",output);
	  num=num/10;
	  check(num);
	}
	return output;

}
int main()
{
	int num,output;
	printf("Enter any number:");
	scanf("%d",&num);
	temp=num;
	output=check(num);
	if(output==temp)
	{
		printf("Given Number is strong number");
	}
	else
	{
		printf("Given Number is Not strong number:");
	}
}
