#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int i=0,j,winner[4],n;
	
	while(i<4)
	{
		n=rand()%25+1;
		int test=0;
		for(j=0;j<i;j++)
		{
			if(winner[j]==n)
			{
				test++;
				break;
			}
		}
		if(test==0)
		{
			winner[i]=n;
			i++;
		}
	}

	cout<<"The four winners are:"<<endl;
	for(i=0;i<4;i++)
		cout<<winner[i]<<" ";
	cout<<endl;	
} 
