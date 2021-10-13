#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	string data;
	int first, last;
	cout<<"Enter a file name : ";
	cin>>data;
	in.open(data);
	if(in.fail())
	{
	    cout<<"Input file opening failed."<<endl;
	    exit(1);
	}
	data=data+"_out.";
	out.open(data);
	in>>first;
	if(first!=3)
	    exit(1);
	out<<first<<endl;
	while(in>>last)
	{
	    if(last==first+4)
	    {
	        out<<last<<endl;
	        first+=4;
	    }
	    else
		    break;
	}
	cout<<"Build "<<data<<endl;
}
