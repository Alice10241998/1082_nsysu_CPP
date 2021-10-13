#include<iostream>

using namespace std;

double count(double p, double o)
{
	double g,kg;
	p+=o/16;
	kg=p/2.2046;
	g=kg*1000;
	return g;	
}

double input()
{
	double p,o,g;
	cout<<"Input pound:";
	cin>>p;
	cout<<"Input ounces:";
	cin>>o;
	g=count(p,o);
	return g;
}

double output()
{
	double kg,g,sum;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	sum=input();
	kg=(int)sum/1000;
	g=sum-1000*kg;
	cout<<"Weight: "<<(int)kg<<"kg and "<<g<<"g"<<endl<<endl;
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
