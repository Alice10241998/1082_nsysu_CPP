#include<iostream>
#include<fstream>
using namespace std;

int main(){
	double array[10]={0};
	fstream file;
	file.open("data.txt"); //ios::in, ios::out
	int count=0; 
	while(!file.eof())
	{
		string tmp;
		file >> tmp;
		count++;
		(int)array[tmp[0]-'0']++;
	}
//	cout<<count<<endl;
	for(int i=0;i<10;i++)
		cout<<i<<" "<<array[i]/(count-1)<<endl;
}
