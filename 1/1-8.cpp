#include<iostream>
using namespace std;

int main()
{
	double n,r,guess;
	int i;
	cout<<"This program makes a rough estimate for square roots."<<endl;
	cout<<"Enter an integer to estimate the square root of:"<<endl;
	cin>>n;
	guess=n/2;
	for(i=0;i<=5;i++)
	{
		r=n/guess;
		guess=(guess+r)/2;
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"The estimated square root of "<<(int)n<<" is "<<r;
}
