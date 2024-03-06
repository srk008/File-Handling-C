#include<iostream>
using namespace std;
class Copy
{
  protected:
  int *ptr,len,number;
  public:
  Copy(int num);
  Copy(Copy &t);
  void display();	
};
Copy::Copy(int num)
{
	number=num;
}
Copy::Copy(Copy &t)
{
	this->number=t.number;
	cout<<"Copied Values are "<<number<<endl;
}
void Copy :: display()
{
	cout<<"Original Value is "<<number<<endl;
}
int main()
{
	int num;
	cout<<"Enter any number:"<<endl;
	cin>>num;
	Copy c(num);
	Copy d(c);
	c.display();
}
