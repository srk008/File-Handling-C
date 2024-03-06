#include<iostream>
using namespace std;
class you
{
	private:
		int rate,quantity;
	public:	
		void setData(int Rate,int quan)
		{
			rate=Rate;
			quantity=quan;
		}
		void cal()
		{
			cout<<"Your Bill is "<<rate*quantity<<endl;
		}
};
int main()
{
	int Rate,quan;
	cout<<"Enter rate and Quantity"<<endl;
	cin>>Rate>>quan;
	you *ref=new you();
	ref->setData(Rate,quan);
	ref->cal();
}
