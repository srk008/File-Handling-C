#include<iostream>
using namespace std;
#include<string.h>
class Isogram
{
  private:
   char name[30],name1[30];
   int len,len1;
   	public:
   	void setstring(char n[],char n1[])
   		{
   			strcpy(name,n);
   			strcpy(name1,n1);
		   }
	void checkstring()
	{
		int flag=0;
		len=strlen(name);
		len1=strlen(name1);
		if(len==len1)
		{
			for(int i=0;i<len;i++)
			{
				for(int j=0;j<len;j++)
				{
					if(name[i]==name1[j])
					{
						flag=1;
					}
				}
				if(flag==1)
				{
					continue;
				}
				else
				{
					break;
				}
			}
			if(flag==1)
			cout<<"Given String is Isogram"<<endl;
			else
			cout<<"Given String is not Isogram"<<endl;
		}
		else
		{
			cout<<"STring are not Isogram"<<endl;
		}
		
		
		
	}	   
};
int main()
{
	char n[30],n1[30];
	cout<<"ENter two string"<<endl;
	cin>>n>>n1;
	
	Isogram i;
	i.setstring(n,n1);
	i.checkstring();
	
}

