#include<iostream>
using namespace std;

class Payment
{
    public:
    Payment(float p):payment(p){};
    void paymentDetails();
    protected:
    float payment;
};

class CashPayment:public Payment
{
    public:
    CashPayment(float p):Payment(p){};
    void paymentDetails(){cout<<"The cash payment amount is "<<payment<<endl;};
};

class CreditCarPayment:public Payment
{
    public:
    CreditCarPayment(float p,string n,string d,int m):Payment(p),name(n),date(d),num(m){};
    void paymentDetails()
    {cout<<"The credit payment amount is: "<<payment<<endl
         <<"The name on the credit card is: "<<name<<endl
         <<"The expiration date is: "<<date<<endl
         <<"The credit card number is: "<<num<<endl;};
    private:
    string name,date;
    int num;
};

int main()
{
    cout<<"Cash 1 details:"<<endl;
    CashPayment A(50.5);
    A.paymentDetails();

    cout<<"Cash 2 details:"<<endl;
    CashPayment B(20.45);
    B.paymentDetails();

    cout<<"Credit 1 details:"<<endl;
    CreditCarPayment C(10.5,"Fred","10/5/2010",123456789);
    C.paymentDetails();

    cout<<"Credit 2 details:"<<endl;
    CreditCarPayment D(100,"Barney","11/15/2009",987654321);
    D.paymentDetails();
}