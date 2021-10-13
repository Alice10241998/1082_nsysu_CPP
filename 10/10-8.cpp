#include<iostream>
#include<string>
using namespace std;
class Television
{
	public:
		Television();
		Television(string,double,int);
		Television(const Television&);
		~Television(){delete [] connectivitySupport;};
		string getdis()const{return displayType;};
		double getdim()const{return dimension;};
		string getcon(int i)const{return connectivitySupport[i];};
		int getn(){return n;};
		Television& operator =(const Television& right);
	private:
		string displayType;
		double dimension;
		string* connectivitySupport;
		int n;//if no num??
};
int main()
{
	string s;
	double d;
	int n,m;
	cout<<"Enter default TV display type :"<<endl;
	cin>>s;
	cout<<"Enter default TV Dimension :"<<endl;
	cin>>d;
	cout<<"Enter the number of coonectivity modes"<<endl;
	cin>>n;
	cout<<"Enter default TV connectivity support types :"<<endl;
	Television de(s,d,n);
	cout<<"Default TV mode:"<<endl;
	cout<<"Display type : "<<de.getdis()<<endl;
	cout<<"Dimension(inches) : "<<de.getdim()<<endl;
	cout<<"connectivity support type:"<<endl;
	for(int i=0;i<n;i++)
		cout<<de.getcon(i)<<endl;
	cout<<"Enter TV numbers:";
	cin>>m;
	Television TV[m];
	for(int i=0;i<m;i++)
		TV[i]=de;
	int idx;
	while(idx!=-1)
	{
		cout<<"Enter index of TVs required of custimization(input -1 to end)"<<endl;
		cin>>idx;
		if(idx>=m)
			continue;
		if(idx==-1)
			break;
		cout<<"Enter TV#"<<idx<<" display type :"<<endl;
		cin>>s;
		cout<<"Enter TV#"<<idx<<" Dimension :"<<endl;
		cin>>d;
		cout<<"Enter the number of coonectivity modes"<<endl;
		cin>>n;
		cout<<"Enter default TV connectivity support types :"<<endl;
		Television newtv(s,d,n);
		TV[idx]=newtv;
	}
	for(int i=0;i<m;i++)
	{
		cout<<"TV#"<<i<<endl;
		cout<<"Display type : "<<TV[i].getdis()<<endl;
		cout<<"Dimension(inches) : "<<TV[i].getdim()<<endl;
		cout<<"connectivity support type:"<<endl;
		for(int j=0;j<TV[i].getn();j++)
			cout<<TV[i].getcon(j)<<endl;
	}
}
Television::Television():dimension(0),n(0)
{
	connectivitySupport=new string [0];
}
Television::Television(string s,double d,int n):displayType(s),dimension(d),n(n)
{
	connectivitySupport=new string [n];
	for(int i=0;i<n;i++)
		cin>>connectivitySupport[i];
}
Television::Television(const Television& a):displayType(a.displayType),dimension(a.dimension),n(a.n)
{
	connectivitySupport=new string[n];
	for(int i=0;i<n;i++)
		connectivitySupport[i]=a.connectivitySupport[i];
}
Television& Television::operator =(const Television& right)
{
	if(&right==this)
		return *this;
	else
	{
		if(n!=right.n)
		{	
			n=right.n;
			delete [] connectivitySupport;
			connectivitySupport=new string [n];
		}
		displayType=right.displayType;
		dimension=right.dimension;
		for(int i=0;i<n;i++)
			connectivitySupport[i]=right.connectivitySupport[i];
		return *this;
	}
}