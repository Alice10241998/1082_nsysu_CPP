#include<iostream>
#include<vector>
using namespace std;

class Pizza
{
	public:
		Pizza(string size,string type,int pep,int cheese){s=size;t=type;p=pep;c=cheese;};
		Pizza(){};
		string size(){return s;};
		string type(){return t;};
		int pep(){return p;};
		int cheese(){return c;};
	private:
		string s,t;
		int p,c;
};
class Order
{
	public:
		void OrderPizza(string size,string type,int pep,int cheese);
		Pizza getpizza(int i){return pizza[i];};
		int getsize(){return pizza.size();};
	private:
		vector<Pizza> pizza;
};

void Order::OrderPizza(string size,string type,int pep,int cheese)
{
	Pizza newpizza(size,type,pep,cheese);
	pizza.push_back(newpizza);
}

void OutputOrder(Order o)
{
	double sum=0;
	cout<<"There are "<<o.getsize()<<" pizzas in the order."<<endl;
	for(int i=0;i<o.getsize();i++)
	{
		Pizza a;
		a=o.getpizza(i);
		cout<<"This pizza is:";
		if(a.size()=="SMALL")
			cout<<"Small, ";
		else if(a.size()=="LARGE")
			cout<<"Large, ";
		else if(a.size()=="MEDIUM")
			cout<<"Medium, ";
		if(a.type()=="HANDTOSSED")
			cout<<"Hand tossed, with ";
		else if(a.type()=="PAN")
			cout<<"Pan, with ";
		else if(a.type()=="DEEPDISH")
			cout<<"Deep dish, with ";
		cout<<a.pep()<<" pepperoni topping and "<<a.cheese()<<" cheese toppings."<<endl;
		if(a.size()=="SMALL")
			sum=sum+10+2*(a.pep()+a.cheese());
		else if(a.size()=="LARGE")
			sum=sum+17+2*(a.pep()+a.cheese());
		else if(a.size()=="MEDIUM")
			sum=sum+14+2*(a.pep()+a.cheese());
	}
	cout<<"The total price is $"<<sum<<endl;
}
int main()
{
	Order o;
	o.OrderPizza("SMALL","HANDTOSSED",0,3);
	o.OrderPizza("LARGE","PAN",2,1);
	OutputOrder(o);
}
