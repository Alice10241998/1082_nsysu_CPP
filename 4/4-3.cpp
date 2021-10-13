#include<iostream>
using namespace std;

void price(int itemCode,int& voucherValue)
{
	int money;
	switch(itemCode)
		{
			case 1:money=10;voucherValue-=10;break;
			case 2:money=20;voucherValue-=20;break;
			case 3:money=30;voucherValue-=30;break;
			case 4:money=40;voucherValue-=40;break;
		}
		cout<<"The price of item which you buy:"<<money<<endl;
		cout<<"You still have value of voucher:"<<voucherValue<<endl<<endl;
}

int main()
{
	int vou,item;
	cout<<"1.Bagel: 10"<<endl;
	cout<<"2.Cake: 20"<<endl;
	cout<<"3.Croissant: 30"<<endl;
	cout<<"4.Toast: 40"<<endl;
	cout<<"Input your value of voucher:";
	cin>>vou;

	while(vou>=10)
	{
		cout<<"Which item you want? ";
		cin>>item;
		cout<<endl<<endl;
		price(item,vou);
	}
	cout<<"You don't have enough value of voucher to buy anything."<<endl;
}
