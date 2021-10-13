#include<iostream>
using namespace std;

int main()
{
	int c=20,v=15,s=15,r=20,b=20,cho=0,van=0,stra=0,ras=0,but=0,choice;
	char input;
	string str;
	
	cout<<"Code    Flavor"<<endl;
	cout<<"1       Chocolate"<<endl;
	cout<<"2       Vanilla"<<endl;
	cout<<"3       Strawberry"<<endl;
	cout<<"4       Raspberry"<<endl;
	cout<<"5       Butterscotch"<<endl;
	while(1)
	{
		cout<<"The products remain in the stock"<<endl;
		cout<<"1       "<<c<<endl;
		cout<<"2       "<<v<<endl;
		cout<<"3       "<<s<<endl;
		cout<<"4       "<<r<<endl;
		cout<<"5       "<<b<<endl;
		cout<<"Choice you like:";
		cin>>str>>choice;
		
		if(str=="Chocolate")
		{	
			c-=choice;
			if(cho+choice<=20)
				cho+=choice;
			if(c<0)
				cout<<"The Chocolate is not enough."<<endl;
		}	
		if(str=="Vanilla")
		{
			v-=choice;
			if(van+choice<=15)
				van+=choice;
			if(v<0)
				cout<<"The Vanilla is not enough."<<endl;
		}
		if(str=="Strawberry")
		{
			s-=choice;
			if(stra+choice<=15)
				stra+=choice;
			if(s<0)
				cout<<"The Strawberry is not enough."<<endl;			
		}
		if(str=="Raspberry")
		{
			r-=choice;
			if(ras+choice<=20)
				ras+=choice;
			if(r<0)
				cout<<"The Raspberry is not enough."<<endl;
		}
		if(str=="Butterscotch")
		{
			b-=choice;
			if(but+choice<=20)
				but+=choice;
			if(b<0)
				cout<<"The Butterscotch is not enough."<<endl; 
		}
		cout<<"Continue Choice?(Y/N)";
		cin>>input;
		if(input=='N'||input!='Y')
			break;
	}
	cout<<"The user's cart"<<endl;
	if(cho!=0)
		cout<<"        Chocolate       "<<cho<<endl;
	if(van!=0)
		cout<<"        Vanilla         "<<van<<endl;
	if(stra!=0)
		cout<<"        Strawberry      "<<stra<<endl;
	if(ras!=0)
		cout<<"        Raspberry       "<<ras<<endl;
	if(but!=0)
		cout<<"        Butterscotch    "<<but<<endl;

}
