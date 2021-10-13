#include<iostream>
using namespace std;

class weight
{
    public:
    void setWeightPounds(double n);
    void setWeightKilograms(double n);
    void setWeightOunces(double n);
    double getpound(){return p;};
    double getkilogram(){return k;};
    double getounce(){return o;};
    private:
    double p,k,o;
};
void weight::setWeightPounds(double n)
{
    p=n;
    o=n*16;
    k=n/2.21;
}
void weight::setWeightKilograms(double n)
{
    k=n;
    p=n*2.21;
    o=n*2.21*16;
}
void weight::setWeightOunces(double n)
{
    o=n;
    p=n/16;
    k=n/16/2.21;
}
int main()
{
    weight w;
    cout<<"Set Kilograms=60"<<endl;
    w.setWeightKilograms(60);
    cout<<"> In Kilograms: "<<w.getkilogram()<<endl;
    cout<<"> In Pounds: "<<w.getpound()<<endl;
    cout<<"> In Ounces: "<<w.getounce()<<endl<<endl;

    cout<<"Set Pounds=110"<<endl;
    w.setWeightPounds(110);
    cout<<"> In Kilograms: "<<w.getkilogram()<<endl;
    cout<<"> In Pounds: "<<w.getpound()<<endl;
    cout<<"> In Ounces: "<<w.getounce()<<endl<<endl;

    cout<<"Set Ounces=1800"<<endl;
    w.setWeightOunces(1800);
    cout<<"> In Kilograms: "<<w.getkilogram()<<endl;
    cout<<"> In Pounds: "<<w.getpound()<<endl;
    cout<<"> In Ounces: "<<w.getounce()<<endl<<endl;

}