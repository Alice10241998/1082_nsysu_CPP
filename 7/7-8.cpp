#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> grade;
	int temp,n;
	//cout<<"Enter the maximum:"<<endl;
	//cin>>n;
	int arr[11]={0};
	
	cout<<"Enter each grade and then -1 to stop."<<endl;
	while(cin>>temp&&temp!=-1)
		grade.push_back(temp);
	for(int i=0;i<grade.size();i++)
		arr[grade[i]]++;
	for(int i=0;i<=10;i++)
		cout<<arr[i]<<" grade<s> of "<<i<<endl;
}
