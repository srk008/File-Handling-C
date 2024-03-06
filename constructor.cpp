#include<iostream>
using namespace std;
class Find
{
   private:
   int n;
   public:
   	
   	void check(int num)
   	{
   		if(num%2==0)
   		{
   			cout<<"Given number is even number:"<<endl;
		   }
	   }
   void check(int num,int num2)
   {
   	  int res;
   	  res=num+num2;
   	  cout<<"Result is "<<res<<endl;
   	  
	   }	
};
int main()
{
	int num,num2;
	cout<<"Enter two number:"<<endl;
	cin>>num>>num2;
	Find r;
    r.check(num);
    r.check(num,num2);
}
