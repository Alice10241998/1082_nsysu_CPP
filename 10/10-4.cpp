#include<iostream>
using namespace std;
class Subscriber
{
	public:
		Subscriber();
		Subscriber(const Subscriber& a);//copy constructor
		void input();
		void output();
		void reset();
		string getname(){return name;};
		int getn(){return numChannels;};
		string* getlist(){return channelList;};
		Subscriber& operator =(const Subscriber& a);//assignment operator
		~Subscriber(){delete[] channelList;};//destructor
	private:
		string name;
		int numChannels;
		string *channelList;
};
int main()
{
	Subscriber s1,s2;
	s1.input();
	cout<<"Person 1's data:"<<endl;
	s1.output();
	s2=s1;
	cout<<"Person2's data after assignment from person 1:"<<endl;
	s2.output();
	s1.reset();
	cout<<"Person 1's data after reset:"<<endl;
	s1.output();
	cout<<"Person 2's data, should still have original classes:"<<endl;
	s2.output();
	return 0;
}
Subscriber::Subscriber():numChannels(0)
{
	channelList=new string [0];
}
Subscriber::Subscriber(const Subscriber& a)
{
	name=a.name;
	numChannels=a.numChannels;
	channelList=new string[numChannels];
	for(int i=0;i<numChannels;i++)
		channelList[i]=a.channelList[i];
}
void Subscriber::input()
{
	cout<<"Enter person name"<<endl;
	cin>>name;
	cout<<"Enetr number of Channels."<<endl;
	cin>>numChannels;
	channelList=new string [numChannels];
	for(int i=0;i<numChannels;i++)
	{
		cout<<"Enter name of Channels "<<i+1<<endl;
		cin>>channelList[i];
	}
}
void Subscriber::output()
{
	cout<<"Name :"<<name<<endl;
	cout<<"Number of Channels: "<<numChannels<<endl;
	for(int i=0;i<numChannels;i++)
		cout<<"        Channel "<<i+1<<" :"<<channelList[i]<<endl;
	cout<<endl;
}
void Subscriber::reset()
{
	numChannels=0;
	delete[] channelList;
	channelList=new string[0];
}
Subscriber& Subscriber::operator =(const Subscriber& a)
{
	if(this==&a)
		return *this;
	else
	{
		if(a.numChannels!=numChannels)
		{
			numChannels=a.numChannels;
			delete[] channelList;
			channelList=new string[numChannels];
		}
		name=a.name;
		for(int i=0;i<numChannels;i++)
			channelList[i]=a.channelList[i];
		return *this;
	}
}