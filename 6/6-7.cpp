#include<iostream>
using namespace std;

class pizza
{
public:
    pizza(string size,string type,int pepperoni,int cheese){t=type;s=size;p=pepperoni;c=cheese;};
    void outputDescription(pizza a);
    double computePrice(pizza a);
    int pepperoni(){return p;};
    int cheese(){return c;};
    string type(){return t;};
    string size(){return s;};
private:
    string t,s;
    int p,c,price;
};

void pizza::outputDescription(pizza a)
{
    //cout<<a.size()<<endl;
    //cout<<a.type()<<endl;
    cout<<"This pizza is:";
    if(a.size()=="small")
        cout<<"Small, ";
    else if(a.size()=="large")
        cout<<"Large, ";
    else if(a.size()=="medium")
        cout<<"Medium, ";
        
    if(a.type()=="handtossed")
        cout<<"Hand tossed, with ";
    else if(a.type()=="pan")
		cout<<"Pan, with ";
    else if(a.type()=="deep dish")
		cout<<"Deep dish, with ";
	cout<<a.pepperoni()<<" pepperoni topping and "<<a.cheese()<<" cheese toppings."<<endl;
}

double pizza::computePrice(pizza a)
{
    if(a.size()=="small")
        price=10+2*(a.pepperoni()+a.cheese());
    else if(a.size()=="madium")
        price=14+2*(a.pepperoni()+a.cheese());
    else if(a.size()=="large")
        price=17+2*(a.pepperoni()+a.cheese());
    cout<<"Price of pizza: "<<price<<endl;
    return price;
}

int main()
{
    pizza a("small","handtossed",0,3);
    a.outputDescription(a);
    a.computePrice(a);
    
    pizza b("large","pan",2,1);
    b.outputDescription(b);
    b.computePrice(b);
}