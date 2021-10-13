#include<iostream>
#include<cstdlib>
using namespace std;
const char rainbow[]={' ','R','O','Y','G','B','I','P'};//just for convience
class RainbowColor
{
	public:
		RainbowColor(char c);//char->int
		RainbowColor(int n);//int=int
		RainbowColor();//default
		bool getRainbowColorByName();//input char and connect output function
		void ouputRainbowColor();//output color name & number->two function in testbook
		bool nextColor();
	private:
		int color;	
};
void testConByInt()
{
	RainbowColor test;
	cout<<"Testing RainbowColor(int) constructor"<<endl;
	for(int i=1;i<=7;i++)
	{
		test=RainbowColor(i);
		test.ouputRainbowColor();
	}
	cout<<endl;
}
void testConByCh()
{
	cout<<"Testing constructor RainbowColor(char)"<<endl;
	RainbowColor test;
	for(int i=1;i<=7;i++)
	{
		test=RainbowColor(rainbow[i]);
		test.ouputRainbowColor();
	}
	cout<<endl;
}
int main()
{
	testConByCh();
	testConByInt();
	RainbowColor test;
	char a;
	cout<<"Testing the getRainbowColorByName and outputRainbowColor."<<endl;
	while(test.getRainbowColorByName())
	{
		cout<<"Testing the getRainbowColorByName and outputRainbowColor."<<endl;
	}
	cout<<"end of loops"<<endl<<endl;
	cout<<"Testing nextRainbowColor member"<<endl;
	while(test.nextColor())
	{	}
}
RainbowColor::RainbowColor(char c)
{
	switch(c)
	{
		case 'R':
			color=1;
			break;
		case 'O':
			color=2;
			break;
		case 'Y':
			color=3;
			break;
		case 'G':
			color=4;
			break;
		case 'B':
			color=5;
			break;
		case 'I':
			color=6;
			break;
		case 'P':
			color=7;
			break;
	}
}
RainbowColor::RainbowColor(int n):color(n)
{}
RainbowColor::RainbowColor():color(0)
{}
bool RainbowColor::getRainbowColorByName()
{
	char c;
	cin>>c;
	switch(c)
	{
		case 'R':
			color=1;
			break;
		case 'O':
			color=2;
			break;
		case 'Y':
			color=3;
			break;
		case 'G':
			color=4;
			break;
		case 'B':
			color=5;
			break;
		case 'I':
			color=6;
			break;
		case 'P':
			color=7;
			break;
		default:
			cout<<c<<" is not a RainbowColor. Exiting"<<endl<<endl;
			return false;
	}
	ouputRainbowColor();
	return true;
	
}
void RainbowColor::ouputRainbowColor()
{
	if(color>0&&color<=7)
	{
		cout<<color<<" ";
		switch(color)
		{
			case 1:
				cout<<'R'<<endl;
				break;
			case 2:
				cout<<'O'<<endl;
				break;
			case 3:
				cout<<'Y'<<endl;
				break;
			case 4:
				cout<<'G'<<endl;
				break;
			case 5:
				cout<<'B'<<endl;
				break;
			case 6:
				cout<<'I'<<endl;
				break;
			case 7:
				cout<<'P'<<endl;
				break;
		}
	}
}
bool RainbowColor::nextColor()
{
	char c;
	cin>>c;
	switch(c)
	{
		case 'R':
			color=1;
			break;
		case 'O':
			color=2;
			break;
		case 'Y':
			color=3;
			break;
		case 'G':
			color=4;
			break;
		case 'B':
			color=5;
			break;
		case 'I':
			color=6;
			break;
		case 'P':
			color=7;
			break;
		default:
			cout<<c<<" is not a RainbowColor. Exiting"<<endl<<endl;
			return false;
	}
	cout<<"current Rainbow Color ";
	ouputRainbowColor();
	color++;
	if(color>7)
		color-=7;
	cout<<"next Rainbow Color ";
	ouputRainbowColor();
}
