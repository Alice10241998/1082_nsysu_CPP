#include<iostream>
#include<string>
using namespace std;

int time(string time1,string time2)
{
	int th1,tm1,th2,tm2;
	int min;
	th1=int(time1[0]-'0')*10+int(time1[1]-'0');
	tm1=int(time1[2]-'0')*10+int(time1[3]-'0');
	th2=int(time2[0]-'0')*10+int(time2[1]-'0');
	tm2=int(time2[2]-'0')*10+int(time2[3]-'0');
	
	if(th1>23||tm1>59||th2>23||tm2>59||time1.length()!=4||time2.length()!=4)
	{
		cout<<"The time is error"<<endl;
		return -1;
	}
		
	else
	{
		int time1=th1*60+tm1;
		int time2=th2*60+tm2;
		if(time1<time2)
			min=time2-time1;
		else
			min=1440-time1+time2;
		return min;	
	}
	
}
int main()
{
	string t1,t2;
	int min;
	cout<<"Please input start time and end time : ";
	cin>>t1>>t2;
	min=time(t1,t2);
	if(min!=-1)
		cout<<"The time difference between "<<t1<<" and "<<t2<<" is "<<min<<" minutes."<<endl;
}
