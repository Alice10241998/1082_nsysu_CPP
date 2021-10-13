#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	for(i=3;i<100;i++)
	{
		n=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				n++;
		}
		if(n==0)
			cout<<i<<" is a prime number."<<endl;
	}
}
