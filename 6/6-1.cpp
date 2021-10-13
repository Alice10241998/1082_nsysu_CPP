#include<iostream>
#include<fstream>
using namespace std;

struct point
{
	double core,per,ide;
};

int main()
{
	point p;
	int temp,i,n=0;
	double sum;
	string s;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	fstream file;
	file.open("CH6_01_data.txt");
	getline(file,s);
	while(!file.eof())
	{
		file>>temp>>p.core>>p.per>>p.ide;
		n++;
	}
	file.close();

	file.open("CH6_01_data.txt");
	getline(file,s);
	cout<<"Number\tTotal\tPoint\n";
	for(i=1;i<=n;i++)
	{
		file>>temp>>p.core>>p.per>>p.ide;
		sum=30*(p.core/10)+50*(p.per/30)+20*(p.ide/10);
		cout<<i<<"     \t"<<sum<<"\t";
		if(sum>=80)
			cout<<"1"<<endl;
		else if(sum>=60&&sum<80)
			cout<<"2"<<endl;
		else if(sum>=50&&sum<60)
			cout<<"3"<<endl;
		else if(sum<50)
			cout<<"4"<<endl;
	}
}
