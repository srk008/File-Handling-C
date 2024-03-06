#include<iostream>
using namespace std;
#include<string.h>
class Try
{
   protected:
   int *ptr,len,temp;
   public:
   void setData(int a[],int size)
   {
   	 ptr=a;
   	 len=size;
	}	
	
};
class t : public Try
{
   public:
   	void sort()
   	{
   	for(int i=0;i<len;i++)
   	{
   		for(int j=i+1;j<len;j++)
   		{
   			if(ptr[i]>ptr[j])
   			{
   				temp=ptr[i];
   				ptr[i]=ptr[j];
   				ptr[j]=temp;
		   }
		}
	}
	for(int i=0;i<len;i++)
	{
		cout<<ptr[i]<<endl;
	}
   		
   		
   		
	}
};
class r : public Try
{
	public:
	void find()
	{
		for(int i=0;i<len;i++)
		{
			for(int j=i+1;j<len;j++)
			{
				if(ptr[i]<ptr[j])
				{
					temp=ptr[i];
					ptr[i]=ptr[j];
					ptr[j]=temp;
				}
			}
		}
		for(int i=0;i<len;i++)
		{
			cout<<ptr[i]<<endl;
		}
	}
}
int main()
{
	int size;
	cout<<"Enter Size"<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter array number "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	t y;
	y.setData(a,size);
	y.sort();
	
	r m;
	m.find();
}
