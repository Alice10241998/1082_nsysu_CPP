#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[80];
	int wfront=0,wtail=0,i=0;
	cout<<"Enter a string less than 80 characters long."<<endl;
	cin.getline(s,80);
	char *head,*tail;
	head=&s[0];
	tail=&s[strlen(s)-1];

	while(head<=tail)
	{
		if(isspace(*head))
			wfront++;
		i++;
		head=&s[i];
	}
	wfront++;

	cout<<"Your string reversed is:"<<endl;
	i=strlen(s)-1;
	head=&s[0];
	while(tail>=head)
	{
		cout<<*tail;
		if(isspace(*tail))
			wtail++;
		i--;
		tail=&s[i];
	}
	cout<<endl;
	wtail++;
	
	if(wtail==wfront)
		cout<<"And your number of words is : "<<wtail<<endl;
	//else
	//	cout<<"Count Error!"<<endl;
}
