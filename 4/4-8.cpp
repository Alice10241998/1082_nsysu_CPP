#include<iostream>
using namespace std;

double count(double kg,double g)
{
	double o;
	kg=kg+g/1000;
	o=kg*2.2046*16;
	return o;
}

double input()
{
	double kg,g,o;
	cout<<"Input Weight<kg>:";
	cin>>kg;
	cout<<"Input Weight<g>:";
	cin>>g;
	o=count(kg,g);
	return o;
}

double output()
{
	double p,o,sum;
	sum=input();
	p=(int)sum/16;
	o=sum-p*16;
	
	cout<<"Weight: "<<p<<" pound and "<<o<<" ounces"<<endl<<endl;
}
int main()
{
	
	char input[3];
	while(1)
	{
		output();
		cout<<"keep calculating?yes/no"<<endl;
		cin>>input;
		if(input[0]=='y')
			continue;
		if(input[0]=='n')
			break;
	}
}
