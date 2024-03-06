#include<iostream>
using namespace std;
#include<string.h>
class StringOperation
{
	protected:
	char s[30],temp;
	public:
		void setData(char name[])
		{
			strcpy(s,name);
		}
		
};
class Sortstring: public StringOperation
{
	public:
		void sort()
		{
			for(int i=0;s[i]!='\0';i++)
			{
				for(int j=i+1;s[j]!='\0';j++)
				{
				if(s[i]>s[j])
				{
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
					
				}
			}
		}
		void show()
		{
			cout<<s<<endl;
		}
};
class Reverse: public StringOperation
{
	private:
	int j;
	char re[30];
	public:
		void rev()
		{
	     int lenth=strlen(s);
			cout<<"Length of original string is "<<lenth<<endl;
			cout<<s<<endl;
			cout<<"String after Reversing "<<endl;
			for(int i=lenth-1,j=0;i>=0;i--,j++)
			{
				re[j]=s[i];
			//	cout<<s[i]<<endl;
			}
			re[lenth]='\0';
		}
		void disp()
		{
				cout<<re<<endl;
		}
		
};
int main()
{
	char name[30];
	cout<<"ENter your name:"<<endl;
	cin>>name;
	Sortstring w;
	w.setData(name);
	w.sort();
	w.show();
	Reverse t;
//	t.setData(name);
	t.rev();
	t.disp();
}

