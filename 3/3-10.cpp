#include<iostream>
using namespace std;

int child(int momtall,int dadtall,int gender)
{
	int childtall;
	if(gender==0)
		childtall=(momtall*13/12+dadtall)/2;
	if(gender==1)
		childtall=(dadtall*12/13+momtall)/2;
	return childtall;
}

int main()
{
	int gender,momfeet,mominch,dadfeet,dadinch,childfeet,childinch,momtall,dadtall,childtall;
	cout<<"Enter the gender of your future child. Use 1 for female, 0 for male."<<endl;
	cin>>gender;
	cout<<"Enter the height in feet and inches of the mom."<<endl;
	cin>>momfeet>>mominch;
	cout<<"Enter the height in feet and inches of the dad."<<endl;
	cin>>dadfeet>>dadinch;
	
	momtall=12*momfeet+mominch;
	dadtall=12*dadfeet+dadinch;
	childtall=child(momtall,dadtall,gender);
	childfeet=childtall/12;
	childinch=childtall%12;
	
	cout<<"Your future child is estimated to grow to "<<childfeet<<" feet and "<<childinch<<" inches."<<endl;
}

