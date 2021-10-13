#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int humanTurn(int humanTotalScore)
{
	srand(time(NULL));
	char input;
	int score, sum=0;
	cout<<"It's your turn! Enter 'r' to roll."<<endl;
	cin>>input;
	while(1)
	{
		score=rand()%6+1;
		cout<<"You rolled "<<score<<endl;
		if(score==1)
		{
			cout<<"You lose your turn.   Enter 'c' to continue."<<endl;
			cin>>input;
			
			return 0;
		}
		if(score>1)
		{
			sum+=score;
			cout<<"Your score this round is: "<<sum<<endl
			<<"If you hold , your total score would be: "<<sum+humanTotalScore<<endl
			<<"Press 'h' to hold or 'r' to roll again."<<endl;
			cin>>input;
			
			if(sum+humanTotalScore>100)
				return sum;
			if(input=='h')
				return sum;
		}
	}
}

int computerTurn(int computerTotalScore)
{
	srand(time(NULL));
	char input;
	int score, sum=0;
	cout<<"It's the computer turn!"<<endl;
	
	while(1)
	{
		score=rand()%6+1;
		cout<<"The computer rolled "<<score<<endl;
		if(score==1)
		{
			cout<<"Computer lose its turn."<<endl;
			return 0;
		}
		if(score>1)
		{
			sum+=score;
			cout<<"The computer's score this round is: "<<sum<<endl
			<<"If the computer holds, its total score would be: "<<sum+computerTotalScore<<endl;
			
			if(computerTotalScore+sum>=100)
				return sum;
			if(sum>=20)
			{
				cout<<"The computer holds.   Enter 'c' to continue."<<endl;
				cin>>input;
				return sum;
			}
		}
	}
}


int main()
{
	int humanTotalScore=0,computerTotalScore=0,hsum=0,csum=0;
	
	while(1)
	{
		hsum=humanTurn(humanTotalScore);
		csum=computerTurn(computerTotalScore);
		computerTotalScore+=csum;
		humanTotalScore+=hsum;
		if(humanTotalScore>=100)
		{
			cout<<"Congratulation, you won."<<endl;
			break;
		}
		if(computerTotalScore>=100)
		{
			cout<<"Sorry, the computer won."<<endl;
			break;
		}

	}
}
