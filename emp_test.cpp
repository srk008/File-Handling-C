#include<iostream>
using namespace std;
#include<string.h>
class emp
{
	protected:
		int id,salary,overtime,totalworking;
		char name[20];
	public:
	void setinfo(int eid,int esalary,int eovertime,int etotalworking,char ename[])
	{
	  	id=eid;
	  	salary=esalary;
	  	overtime=eovertime;
	  	totalworking=etotalworking;
	  	strcpy(name,ename);
	  	
	}
	void display()
	{
	
		
			cout<<id<<"\t"<<salary<<"\t"<<overtime<<"\t"<<totalworking<<"\t"<<name<<endl;
		
	}	
};
class overtime :public emp
{
	private:
		
		public:
			void calculate()
			{
				for(int i=0;i<5;i++)
				{
					
				}
			}
		
};
int main()
{
	int eid, esalary,eovertime,etotalworking;
	char ename[20];
	emp e[5];
	cout<<"ENter emp id salary overtime totalworkin name"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>eid>>esalary>>eovertime>>etotalworking>>ename;
		e[i].setinfo(eid,esalary,eovertime,etotalworking,ename);
	}
		for(int i=0;i<5;i++)
    e[i].display();
    
    overtime o;
    o.calculate() ;
}
