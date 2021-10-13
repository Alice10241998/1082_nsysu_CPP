#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    int i,n,idx=0;

    cout<<"Enter the number of suitors"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
        a.push_back(i);
    while(n!=1)
    {
        idx=(idx+2)%n;
        a.erase(a.begin()+idx);
        n=a.size();
    }
    cout<<"To win the princess, you should stand in position "<<a[0]<<endl;
}