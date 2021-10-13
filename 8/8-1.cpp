#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
class Money
{
	public:
		Money();
		Money(double amount);
		Money(int d,int c);
		//Money(int d);
		double getAmount() const;
		int getDollar() const;
		int getCents() const;
		const Money percent(int perentFingure) const;
		friend const Money operator +(const Money& a1,const Money& a2);
		friend const Money operator -(const Money& a1,const Money& a2);
		friend bool operator ==(const Money& a1,const Money& a2);
		friend bool operator <(const Money& a1,const Money& a2);
		friend bool operator <=(const Money& a1,const Money& a2);
		friend bool operator >(const Money& a1,const Money& a2);
		friend bool operator >=(const Money& a1,const Money& a2);
		friend ostream& operator <<(ostream& outputStream,const Money& amount);
		friend istream& operator >>(istream& inputStream,Money& amount);
	private:
		int d,c; 
		int dollarpart(double amount) const;
		int centpart(double amount) const;
		
};
int main()
{
	int p;
	Money your,my(10,9);
	cout<<"Enter an amount of money: ";
	cin>>your;
	cout<<"Enter a percent you wish to take of your amount: ";
	cin>>p;
	cout<<"Your amount is "<<your<<endl;
	cout<<"My amount is "<<my<<endl;
	cout<<p<<" % of your amount is "<<your.percent(p)<<endl;
	cout<<"15% of my amount is "<<my.percent(15)<<endl;

	cout<<"One of us is richer."<<endl;
	//Money add,de;
	//add=
	cout<<your<<" + "<<my<<" equals "<<your+my<<endl;
	cout<<your<<" - "<<my<<" equals "<<your-my<<endl;

	cout<<"Your amount is "<<your<<endl;
	cout<<"My amount is "<<my<<endl;
	if(your>=my)
	{
		cout<<"Your amount is greater than or equal to my amount."<<endl;
	}
	else if(your<=my)
	{
		cout<<"My amount is greater than or equal to your amount."<<endl;
	}
	if((your+my)>(your-my))
	{
		cout<<"The sum of our amounts is greater than the difference."<<endl;
	}
	else if((your+my)<(your-my))
	{
		cout<<"The sum of our amounts is less than the difference."<<endl;
	}
	if(your>my)
	{
		cout<<"Your amount is greater than my amount."<<endl;
	}
	else if(your<my)
	{
		cout<<"My amount is greater than your amount."<<endl;
	}
	if((your+my)>=(your-my))
	{
		cout<<"The sum of our amounts is greater than or equal to the difference."<<endl;
	}
	else if((your+my)<(your-my))
	{
		cout<<"The sum of our amounts is less than or equal to the difference."<<endl;
	}
}
Money::Money():d(0),c(0)
{}
Money::Money(double amount):d(dollarpart(amount)),c(centpart(amount))
{}
Money::Money(int d,int c):d(d),c(c)
{}
double Money::getAmount() const
{
	double a;
	int dollar=d;
	int cent=c;
	a=d+(double)c*0.01;
	return a;
}
int Money::getDollar() const
{
	return d;
}
int Money::getCents() const
{
	return c;
}
const Money Money::percent(int perentFingure) const
{
	double a;
	int dollar=d;
	int cent=c;
	a=d+(double)c*0.01;
	a=a*perentFingure*0.01;
	return Money(a);
}
int Money::dollarpart(double amount) const
{
	return (int)amount;
}
int Money::centpart(double amount) const
{
	int c;
	c=(int)(amount*100)%100;
	return c;
}
ostream& operator <<(ostream& outputStream,const Money& amount)
{
	outputStream<<"$"<<amount.getAmount();
	return outputStream;
}
istream& operator >>(istream& inputStream,Money& amount)
{
	char temp;
	double a;
	inputStream>>temp>>a;
	amount=Money(a);
	return inputStream;
}
const Money operator +(const Money& a1,const Money& a2)//a1 your a2 my
{
	double a;
	a=a1.getAmount()+a2.getAmount();
	return Money(a);
}
const Money operator -(const Money& a1,const Money& a2)
{
	double a;
	a=a1.getAmount()-a2.getAmount();
	return Money(a);
}
bool operator ==(const Money& a1,const Money& a2)
{
	double amount1,amount2;
	amount1=a1.getAmount();
	amount2=a2.getAmount();
	if(amount1==amount2)
		return true;
	else
		return false;
}
bool operator <(const Money& a1,const Money& a2)//a1 add a2 de
{
	if(a1.getAmount()<a2.getAmount())
		return true;
	else
		return false;
}
bool operator <=(const Money& a1,const Money& a2)
{
	if(a1.getAmount()<=a2.getAmount())
		return true;
	else
		return false;
}
bool operator >(const Money& a1,const Money& a2)
{
	if(a1.getAmount()>a2.getAmount())
		return true;
	else
		return false;
}
bool operator >=(const Money& a1,const Money& a2)
{
	if(a1.getAmount()>=a2.getAmount())
		return true;
	else
		return false;
}
