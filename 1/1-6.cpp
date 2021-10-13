#include<iostream>
using namespace std;

int main()
{
	double d,t,money;
	cout<<"Distance and Time:";
	cin>>d>>t;
	
	if(d<=2)
		money=2+0.2*t;
	
	if(d>2&&d<=8)
		money=2+0.5*(d-2)+0.2*t;
		
	if(d>8)
		money=2+0.5*(8-2)+1*(d-8)+0.2*t;
		
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);	
	cout.precision(2);
	cout<<"Total:"<<money<<endl;
}
