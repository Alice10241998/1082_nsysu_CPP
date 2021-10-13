#include<iostream> 
using namespace std;

double kcount(double p, double o)
{
	double g,kg;
	p+=o/16;
	kg=p/2.2046;
	g=kg*1000;
	return g;	
}

double kinput()
{
	double p,o,g;
	cout<<"Input pound:";
	cin>>p;
	cout<<"Input ounces:";
	cin>>o;
	g=kcount(p,o);
	return g;
}

double koutput()
{
	double kg,g,sum;
	sum=kinput();
	kg=(int)sum/1000;
	g=sum-1000*kg;
	cout<<"Weight: "<<(int)kg<<"kg and "<<g<<"g"<<endl<<endl;
}

double pcount(double kg,double g)
{
	double o;
	kg=kg+g/1000;
	o=kg*2.2046*16;
	return o;
}

double pinput()
{
	double kg,g,o;
	cout<<"Input Weight<kg>:";
	cin>>kg;
	cout<<"Input Weight<g>:";
	cin>>g;
	o=pcount(kg,g);
	return o;
}

double poutput()
{
	double p,o,sum;
	sum=pinput();
	p=(int)sum/16;
	o=sum-p*16;
	
	cout<<"Weight: "<<(int)p<<" pound and "<<o<<" ounces"<<endl<<endl;
}

int main()
{
	char input[3];
	int enter;
	
	
	while(1)
	{
		cout<<"If you want conver pound and ounces to kg and g,enter 1"<<endl;
		cout<<"If you want conver pound and ounces to pound and ounces,enter 2"<<endl;
		cin>>enter;
		
		if(enter==1) 
			koutput();
		if(enter==2)
			poutput();
			
		cout<<"keep calculating?yes/no"<<endl;
		cin>>input;
		if(input[0]=='y')
			continue;
		if(input[0]=='n')
			break;
	}
}
