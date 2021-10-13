#include<iostream>
using namespace std;

double hat(double height,double weight)
{
	double hatsize;
	hatsize=weight/height*2.9;
	return hatsize;
}

double jacket(double height,double weight,int age)
{
	double jacketsize,adjust;
	if(age>30)
		adjust=(age-30)/10*(1/8);
	jacketsize=height*weight/288+adjust;
	return jacketsize;
}

double waist(double weight,int age)
{
	double waistsize,adjust;
	if(age>28)
		adjust=(age-28)/2*(1/10);
	waistsize=weight/5.7+adjust;
	return waistsize;
}

int main()
{
	char input='y';
	double height,weight;
	int age;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	while(input=='y'||input=='Y')
	{
		cout<<"Give me your height in inches, weight in pounds, and age in years and I will give you your hat size, jacket size(inches at chest) and your waist size in inches."<<endl;
		cin>>height>>weight>>age;
		
		cout<<"hat size = "<<hat(height,weight)<<endl;
		cout<<"jacket size = "<<jacket(height,weight,age)<<endl;
		cout<<"waist size = "<<waist(weight,age)<<endl<<endl;
		
		cout<<"enter Y or y to repeat this calculation, any other character ends."<<endl;
		cin>>input;
	}
	
	return 0;
}
