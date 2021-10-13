#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	string s;
	char temp;
	while(cin>>s)
	{
		if(s.length()==4)
		{
			int test=0;
			for(int i=0;i<4;i++)
			{
				if(ispunct(s[i]))
					test++;
			}
			if(test!=0)
				cout<<s<<" ";
			else
			{
				if(s[0]>='A'&&s[0]<='Z')
					cout<<"Love ";
				else
					cout<<"love ";
			}
		}
		else if(s.length()==5)
		{
			int test=0;
			for(int i=0;i<5;i++)
			{
				if(ispunct(s[i]))
					test++;
			}
			if(test==1&&ispunct(s[0]))
			{
				cout<<s[0];
				if(s[1]>='A'&&s[1]<='Z')
					cout<<"Love ";
				else
					cout<<"love ";
			}
			if(test==1&&ispunct(s[4]))
			{
				if(s[0]>='A'&&s[0]<='Z')
					cout<<"Love";
				else
					cout<<"love";
				cout<<s[4]<<" ";
			}
			else
				cout<<s<<" ";
		}
		else
			cout<<s<<" ";
		temp=cin.peek();
		if(temp=='\n')
			break;
	}
	cout<<endl;
}
