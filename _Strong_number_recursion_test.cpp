#include<stdio.h>
int temp;
int strong(int digit,int res,int p)//5,0,1
{
//	static int res,output;
	if(p<=digit)//1<=5
	{
		res=res*p;
		p++;
		strong(digit,res,p);
	}
	return res;
}
int check(int num)//145
{
	int output=0;
	static int sum=0;

	if(num!=0)
	{
	 int digit=num%10;
	 int p=1,res=1;
		output=output*10+strong(digit,res,p);
		sum=sum+output;
		
		printf("\nOutput is %d",sum);
	  num=num/10;
	  check(num);
	}
	//	printf("Output is %d",output);
	return sum;

}
int main()
{
	int num,output;
	printf("Enter any number:");
	scanf("%d",&num);//145
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
