#include<iostream>
using namespace std;

int main()
{
	int caf,p;
	cout<<"How many milligrams of caffeine in the drink?"<<endl;
	cin>>caf;
	
	if(10000%caf==0)
		p=10000/caf;
	else
		p=10000/caf+1;
	
	cout<<"The number of drinks it will take to kill someone is "<<p<<" drinks."<<endl;
}
