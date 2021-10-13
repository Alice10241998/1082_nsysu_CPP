#include<iostream>
using namespace std;
class Charpair
{
	public:
		Charpair();
		Charpair(int sz);
		Charpair(char a,int s);
		char& operator [](int idx){return arr[idx];};
		int getsize(){return size;};
	private:
		char arr[100];
		int size;
};

Charpair::Charpair()
{
	size=10;
	for(int i=0;i<10;i++)
		arr[i]='#';
}
Charpair::Charpair(int sz):size(sz)
{
	for(int i=0;i<sz;i++)
		arr[i]='#';
}
Charpair::Charpair(char a,int s):size(s)
{
	for(int i=0;i<s;i++)
		arr[i]=a;
}

int main()
{
	char a;
	int n;
	Charpair p;
	cout<<"Default output(10):";
	for(int i=0;i<p.getsize();i++)
		cout<<p[i]<<" ";
	cout<<endl<<"Size: "<<p.getsize()<<endl;
	
	cout<<"-----clear array-----"<<endl;
	cout<<"First sz member of the char array to #:";
	cin>>n;
	p=Charpair(n);
	for(int i=0;i<p.getsize();i++)
		cout<<p[i]<<" ";
	cout<<endl<<"Size: "<<p.getsize()<<endl;

	cout<<"-----clear array-----"<<endl;
	cout<<"First sz member of the char array to ?:";
	cin>>n>>a;
	p=Charpair(a,n);
	for(int i=0;i<p.getsize();i++)
		cout<<p[i]<<" ";
	cout<<endl<<"Size: "<<p.getsize()<<endl;
}
