#include<iostream>
using namespace std;

class Temperature
{
	public:
		friend istream& operator >>(istream& in,Temperature& a);
		friend ostream& operator <<(ostream& out,const Temperature& a);
		friend bool operator ==(const Temperature& a,const Temperature& b);
	private:
		double k,c,f;
};
int main()
{
	Temperature a,b;
	cout<<"Input a temperature1 in Fahrenheit."<<endl;
	cin>>a;
	cout<<a<<endl;
	cout<<"Input a temperature2 in Fahrenheit."<<endl;
	cin>>b;
	cout<<b<<endl;
	if(a==b)
		cout<<"temperator1== temperature2: true"<<endl;
	else
		cout<<"temperator1== temperature2: false"<<endl;
}
istream& operator >>(istream& in,Temperature& a)
{
	in>>a.f;
	a.c=(a.f-32)*5/9;
	a.k=a.c+273.15;
	return in;
}
ostream& operator <<(ostream& out,const Temperature& a)
{
	out<<"In Kelvin: "<<a.k<<endl;
	out<<"In Celisus "<<a.c<<endl;
	out<<"In Fahrenheit: "<<a.f<<endl;
	return out;
}
bool operator ==(const Temperature& a,const Temperature& b)
{
	return (a.f==b.f);
}
