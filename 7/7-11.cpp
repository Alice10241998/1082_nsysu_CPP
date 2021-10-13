#include<iostream>
#include<vector>
using namespace std;

class Player
{
	public:
		Player(string name,int score){n=name;s=score;};
		Player(){};
		string getname(){return n;};
		int getscore(){return s;};
	private:
		string n;
		int s;
};

int main()
{
	char input;
	string name;
	int score;
	vector<Player> p;
	while(input!='e')
	{
		cout<<"Enter an option: \na. Add new player and score. \nb. Print all players and scores. \nc. Search for a player's score. \nd. Remove a player. \ne. Quit"<<endl;
		cin>>input;
		cout<<endl<<endl;
		int t=0;
		switch(input)
		{
			case 'a':
				{
					cout<<"Enter new player name."<<endl;
					cin>>name;
					cout<<"Enetr new player score."<<endl;
					cin>>score;
					Player temp(name,score);
					p.push_back(temp);
				}
				break;
			case 'b':
				{
					cout<<"Player'Scores"<<endl;
					for(int i=0;i<p.size();i++)
						cout<<p[i].getname()<<" "<<p[i].getscore()<<endl;
				}
				break;
			case 'c':
				{
					cout<<"What player to search for?"<<endl;
					cin>>name;
					for(int i=0;i<p.size();i++)
						if(p[i].getname()==name)
						{
							t++;
							cout<<"The score for "<<name<<" is "<<p[i].getscore()<<endl;
							break;
						}
					if(t==0)
						cout<<"Player "<<name<<" not found"<<endl;
				}
				break;
			case 'd':
				{
					cout<<"What player to remove?"<<endl;
					cin>>name;
					for(int i=0;i<p.size();i++)
						if(p[i].getname()==name)
						{
							t++;
							p.erase(p.begin()+i);
							cout<<"Player "<<name<<" removed."<<endl;
							break;
						}
					if(t==0)
						cout<<"Player "<<name<<" not found"<<endl;
				}
				break;
		}
	}
}
