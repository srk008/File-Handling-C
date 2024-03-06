#include<iostream>
using namespace std;
#include<string.h>
class Palindrome
{
	private:
		int *ptr,len,l;
		char s[20];
	public:
	void checkpalindrom(int a[],int size)
	{
	    ptr=a;
		len=size;
		int j=len,flag=0;
		
		for(int i=0,j=len;i<(len/2);i++,j--)
		{
		   	if(*ptr[i]==*ptr[j])
		   	{
		   		flag=1;
		   			cout<<ptr[i]<<"\t"<<ptr[j]<<endl;
			   }
			 else
			 {
			 	flag=0;
			 	break;
			   }  
		}
		if(flag==1)
		{
			cout<<"Given array is palindrom"<<endl;
			}
		else
		{
			cout<<"Given array is not Palindrom"<<endl;
				}		
	}
	void checkpalindrom(char n[])
	{
		int k,flag=0;
		strcpy(s,n);
		l=strlen(s);
		k=len;
	   for(int i=0;i<(l-1/2);i++,k--)
	   {
	   	 if(s[i]==s[k])
	   	 {
	   	 	flag=1;
	   	 	cout<<s[i]<<"\t"<<s[k]<<endl;
		}
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"Given string is palindrom"<<endl;
		}
		else
		{
			cout<<"Given string is not Palindrom"<<endl;
		}			
		
	}	
		
};
int main()
{
	int size;
	char n[20];
	cout<<"ENter size "<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter string"<<endl;
	cin>>n;
	
	Palindrome p;
	p.checkpalindrom(a,size);
	p.checkpalindrom(n);
	
}
