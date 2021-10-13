#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	string str;
	while(1)
	{
		cout<<"When enter a single ""-1"" in one line this program will end."<<endl;
		getline(cin,str);
		if(str=="-1")
			break;
		for(int i=0;i<str.size();i++)
		{
			if(isdigit(str[i]))
				cout<<(int)(str[i]-'0'+5)/10;
			else if(isalpha(str[i]))
			{
				if((str[i]+3>'Z'&&str[i]<='Z')||(str[i]+3>'z'))
					cout<<(char)(str[i]-23);
				else
					cout<<(char)(str[i]+3);
			}
			else if(ispunct(str[i]))
				cout<<" ";
		}
		cout<<endl;
	}
}
