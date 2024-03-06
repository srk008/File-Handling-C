#include<iostream>
using namespace std;
class Rate
{
//	private:
protected:
		int num,quan;
	public:
		Rate(int rate,int q)
		{
			num=rate;
			quan=q;
		}
	void friend cal(Rate t);	
		
};
void cal(Rate t)
{
	int result;
	cout<<"Your Bill Is "<<num*quan<<endl;
}
int main()
{
	int rate,q;
	cout<<"Enter rate and quantity"<<endl;
	cin>>rate>>q;
	Rate t(rate,q);
	cal(t );
	
	
	
}
