#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double d,r,w,i;
	int m=1;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout<<"deposit:";
	cin>>d;
	cout<<"Rate:";
	cin>>r;
	cout<<"Fixed amout withdrawn every month:";
	cin>>w;
	
	cout<<"month  interest        principal"<<endl;
	while(d*r+d-w>0)
	{
		i=r*d;
		d=d-w+i;
	
		cout<<std::left<<setw(16)<<m;
		cout<<std::left<<setw(16)<<i;
		cout<<d<<endl;
		m++;
	}
	
	i=d*r;
	d=d+i;
	cout<<"number of payments = "<<m<<" last months interest = "<<i<<" last payment = "<<d<<endl;
}
