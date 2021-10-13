#include<iostream>
#include<cmath>
using namespace std;
const int movierate[4][6]={{3,1,5,2,1,5},{4,2,1,4,2,4},
			   				{3,1,2,4,4,1},{5,1,4,2,4,2}};

int main()
{
	int usermovie[3],userrate[3],i=0;
	double distance[4];

	for(i=0;i<3;i++)
	{
		cout<<"Enter a movie to rate (100-105)."<<endl;
		cin>>usermovie[i];
		cout<<"Enter rating (1-5) for this movie."<<endl;
		cin>>userrate[i];
	}
	
	int temp=0;
	double smallest;
	for(int j=0;j<4;j++)
	{
		distance[j]=pow((userrate[0]-movierate[j][usermovie[0]-100]),2)+pow((userrate[1]-movierate[j][usermovie[1]-100]),2)+pow((userrate[2]-movierate[j][usermovie[2]-100]),2);
	}
	smallest=distance[0];
	for(int n=0;n<4;n++)
	{
		if(distance[n]<smallest)
		{
			smallest=distance[n];
			temp=n;
		}
	}
	cout<<"The closest reviewer is number "<<temp<<endl;
	cout<<"Predictions for movies you have not yet seen:"<<endl;
	bool s;
	for(int a=0;a<6;a++)
	{
		s=false;
		for(int b=0;b<3;b++)
		{
			if(usermovie[b]-100==a)
				s=true;		
		}
		if(s)
			continue;
		cout<<"Movie "<<a+100<<" :Predicted Rating = "<<movierate[temp][a]<<endl; 
	}
}
