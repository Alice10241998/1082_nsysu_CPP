#include<iostream>
#include<string> 
using namespace std;

int main()
{
	int a=0,e=0,i=0,o=0,u=0;
	string str;
	
	cout<<"Please input the string : ";
	getline(cin,str);
	
	for(int j=0;j<=str.length();j++)
	{
		if(str[j]=='a')
			a++;
		if(str[j]=='e')
			e++;
		if(str[j]=='i')
			i++;
		if(str[j]=='o')
			o++;
		if(str[j]=='u')
			u++;
	}
	
	cout<<"Vowel   Count"<<endl;
	cout<<"a       "<<a<<endl;
	cout<<"e       "<<e<<endl;
	cout<<"i       "<<i<<endl;
	cout<<"o       "<<o<<endl;
	cout<<"u       "<<u<<endl;	
} 
