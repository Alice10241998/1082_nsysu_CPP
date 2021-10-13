#include<iostream>
using namespace std;
class Trivia
{
	public:
		Trivia(){};
		Trivia(string que,string ans,int dollar){q=que;a=ans;d=dollar;};
		string que(){return q;};
		string ans(){return a;};
		int dollar(string s)
		{
			if(s==a) return d;
			else return 0;
		};
	private:
		string q,a;
		int d;
};

int main()
{
	Trivia Q[5];
	Q[0]=Trivia("Year that Amelia Earhart disappeared?","1938",5);
	Q[1]=Trivia("Which season that the children will growth faster?","spring",5);
	Q[2]=Trivia("Can human keep the eyes open when sneezing?","no",5);
	Q[3]=Trivia("Which musle of human's body is most strongth?","tongue",5);
	Q[4]=Trivia("What is the 49th state admitted to the USA?","alaska",2);
	cout<<"Trivia Game!"<<endl;
	int sum=0,t;
	string a;
	for(int i=0;i<5;i++)
	{
		cout<<"You have $"<<sum<<endl;
		cout<<Q[i].que()<<endl;
		cin>>a;
		t=Q[i].dollar(a);
		if(t!=0)
			cout<<"That's right! You win $"<<t<<endl;
		else
			cout<<"Sorry, the correct answer is: "<<Q[i].ans()<<endl;
		sum+=t;
	}
	cout<<"Game over. Your total winnings are: $"<<sum<<endl;
}
