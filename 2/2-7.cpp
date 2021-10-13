#include<iostream>
using namespace std;

int main()
{
	char grade;
	int i,n;
	double point,sum;
	cout<<"Input the number of subjects:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Score received for subjects "<<i<<" :";
		cin>>grade;
		switch(grade)
		{
			case 'S': point+=10; break;
			case 'A': point+=9; break;
			case 'B': point+=8; break;
			case 'C': point+=7; break;
			case 'D': point+=6; break;
			case 'E': point+=5; break;
			case 'F': point+=0; break;
		}
	}

	sum=point/n;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"The average of the grade points "<<sum<<endl;
}
