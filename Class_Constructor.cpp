#include<iostream>
using namespace std;
class Array
{
	protected:
		int *ptr,len;
	public:
	Array(int a[],int size)
	{
	   ptr=a;
	   len=size;
	}	
	void dispaly()
  {
  	  for(int i=0;i<len;i++)
  	  {
  	  	cout<<ptr[i]<<endl;
		}
	}	
};

int main()
{
	int size;
	cout<<"ENter Size of array:"<<endl;
	cin>>size;
	int a[size];
	cout<<"ENter array element:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	Array q(a,size);
      q.dispaly();
}
