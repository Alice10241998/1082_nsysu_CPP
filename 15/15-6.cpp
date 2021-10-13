#include<iostream>
#include<ctime>
using namespace std;

class Player
{
    public:
    virtual int getGuess(int range[]){return 0;};
};

class HumanPlayer : public Player
{
    public:
    int getGuess(int range[]);
};

class ComputerPlayer : public Player
{
    public:
    int getGuess(int range[]);
};

int HumanPlayer::getGuess(int range[])
{
    int num;
    cin>>num;
    return num;
}
int ComputerPlayer::getGuess(int range[])
{
    int num=rand()%(range[1]-range[0]+1)+range[0];
    cout<<"The computer guesses "<<num<<endl;
    return num;
}

bool checkForWin(int guess, int answer, int range[])
{
    if(answer==guess)
    {
        cout << "You're right! You win!"<< endl;
        return true;
    }
    else if(answer<guess)
    {
        cout << "Your guess is too high."<< endl;
        if(guess<range[1]) range[1]=guess-1;
    }
    else
    {
        cout << "Your guess is too low."<< endl;
        if(guess>range[0]) range[0]=guess+1;
    }
    return false; 
}

void play(Player&player1,Player&player2)
{
    int answer=0,guess=0;
    int range[2]={0,100};
    answer=rand()%100;
    bool win=false;
    while(!win)
    {
        cout<<"Player 1's turn to guess."<<endl;
        guess=player1.getGuess(range);
        win=checkForWin(guess,answer,range);
        if(win) return;
        cout<<"Player 2's turn to guess."<<endl;
        guess=player2.getGuess(range);
        win=checkForWin(guess,answer,range);
    }
}

int main()
{
    HumanPlayer h;
    ComputerPlayer c;
    play(h,c);
    char q;
    cout<<"Enter a character to exit."<<endl;
    cin>>q;
}