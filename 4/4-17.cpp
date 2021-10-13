#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
int getPlayerScore(string name[],int score[],string input);
void average(int score,int average,string input);
int main()
{
	fstream file;
	string name[5],input;
	int score[5],sum=0,temp;
	//double average;
	file.open("scores.txt",ios::in);
	for(int i=0;i<5;i++)
	{
		file>>name[i];
		file>>score[i];
		sum+=score[i];
		//cout<<name[i]<<endl<<score[i]<<endl;
	}
	//for(int i=0;i<5;i++)
	//{
	//	cout<<name[i]<<endl;
	//}
	cout<<"Average is "<<sum/5<<endl;
	file.close();
	while(1)
	{
		cout<<"Please input player's name:";
		cin>>input;
		temp=getPlayerScore(name,score,input);
		if(temp==-1)
			cout<<"The player is not found in the file."<<endl;
		else
			average(temp,sum/5,input);
	}
	
	
}

int getPlayerScore(string name[],int score[],string input)
{
	int test=-1;
//	string name[5];
//	fstream file;
//	file.open("score.txt",ios::in);
//	for(int i=0;i<5;i++)
//	{
//		file>>name[i];
//		file>>score[i];
//	}
	for(int i=0;i<5;i++)
	{
		if(input==name[i])
		{
			test=i;
			break;
		}	
	}
	if(test==-1)
		return -1;
	else
		return score[test];
	
}
void average(int score,int average,string input)
{
	if(score>average)
		cout<<input<<" : "<<score<<" is higher than aversge"<<endl;
	else if(score==average)
		cout<<input<<" : "<<score<<" is equal to average"<<endl;
	else
		cout<<input<<" : "<<score<<" is below than average"<<endl;
}

