#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int birth[51];
	double peo[51];
	
	for(int i=2;i<51;i++)
	{
		double count=0;
		for(int j=0;j<5000;j++)
		{
			int tmp=0;
			for(int k=0;k<i;k++)
				birth[k]=rand()%365+1;
			for(int m=0;m<i;m++)
			{
				for(int n=m+1;n<i;n++)
				{
					if(birth[m]==birth[n])
					tmp=1;
					break;
				}
				if(tmp==1)
					break;
			}
			if(tmp==1)
				count++;
		}
		peo[i]=count/5000;
		cout<<"For "<<i<<" people, the probability of two birthdays is about "<<peo[i]<<endl;
	}
}
