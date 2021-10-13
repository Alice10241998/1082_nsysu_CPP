#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
    int num=0,temp=0,mid,first,last,m,f,l;
    double data;
    string input;
    ifstream in;

    cout<<"Enter a file name :";
    cin>>input;
    in.open(input);
    
    while(in>>data)
        num++;
    in.close();
    in.open(input);

    if(num%2!=0)
    {
        first=ceil(num*0.25);
        mid=ceil(num*0.5);
        last=ceil(num*0.75);

        while(in>>data)
        {
            temp++;
            if(temp==first)
                f=data;
            if(temp==mid)
                m=data;
            if(temp==last)
                l=data;
        }
        cout<<"Median number : "<<mid<<" , value : "<<m<<endl;
    }

    if(num%2==0)
    {
        first=ceil(num*0.25);
        mid=ceil(num*0.5);
        last=ceil(num*0.75);

        while(in>>data)
        {
            temp++;
            if(temp==first)
                f=data;
            if(temp==mid)
            {
                m=data;
                in>>data;
                temp++;
                m=(data+m)/2;
            }
            if(temp==last)
                l=data;
        }
        cout<<"Median number : "<<mid <<mid+1 <<" , value : "<<m<<endl;
    }
    
    cout<<"Quartile : "<<f<<" "<<m<<" "<<l<<endl;
}