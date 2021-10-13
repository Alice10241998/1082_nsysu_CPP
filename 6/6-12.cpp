#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

class BoxOfProduce
{
    public:
    void set(int i,string a){s[i]=a;};
    void output(){cout<<"The box contains: "<<"(1)"<<s[0]<<" (2)"<<s[1]<<" (3)"<<s[2]<<endl;};
    private:
    string s[3];
};

int main()
{
    srand(time(NULL));
    fstream file;
    file.open("produce.txt");
    
    BoxOfProduce b;
    char ch;
    int input,i;
    string change,a[5];

    for(i=0;i<5;i++)
        file>>a[i];
    for(i=0;i<3;i++)
    {
        int r=rand()%5;
        b.set(i,a[r]);
    }
    file.close();
    b.output();
    while(1)
    {
        cout<<"Enter 'c' to change a bundle."<<endl;
        cout<<"Enter 'q' to quit."<<endl;
        cin>>ch;
        if(ch=='c')
        {
            cout<<"Enter index of item to chage."<<endl;
            cin>>input;
            cout<<"Enter item to substitute."<<endl;
            cin>>change;
            b.set(input-1,change);
            b.output();
        }
        else if(ch=='q')
            break;
    }
    cout<<"Final Contents:"<<endl;
    b.output();
}