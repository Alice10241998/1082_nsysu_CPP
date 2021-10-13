#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    double num=0,sum=0,data=0;
    string input;

    ifstream in;

    cout<<"Enter a file name :";
    cin>>input;

    in.open(input);

    if(in.fail())
    {
        cout<<"Can't open file "<<input<<endl;
        exit(1);
    }

    while(in>>data)
    {
        sum+=data;
        num++;
    }
    in.close();
    sum=sum/num;
    cout<<"Average of "<<num<<" numbers is "<<sum<<endl;
}