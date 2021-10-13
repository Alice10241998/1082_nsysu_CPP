#include<iostream>
using namespace std;

int main()
{
	double f,c=100;
	
	while(c!=f)
	{
		c--;
		f=1.8*c+32;
	}
	cout<<"The temperature is the same at "<<c<<endl;
	
	return 0;
}
