#include<iostream>
using namespace std;
class A
{
	int number;
	public:
		void show()
		{
			cout<<"Value from class A is "<<endl;
		}
};
class B :public A
{
	int numb;
	public:
		void show()
		{
			cout<<"Value from class B is "<<endl;
		}
};
int main()
{
	int num;
	cout<<"ENter any number "<<endl;
	cin>>num;
	B f;
	f.show();
	f.show();
}
