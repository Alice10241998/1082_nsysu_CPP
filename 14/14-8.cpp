#include<iostream>
#include<vector>
using namespace std;

class Blog
{
    public:
    void display();
    void post();
    void del();
    protected:
    vector<string>message;
};

class Viewer : public Blog
{
    public:
    Viewer():Blog(){};
    Viewer(Blog& o):Blog(o){};
    void output();
};

class Owner : public Blog
{
    public:
    Owner():Blog(){};
    void output();
};

void Blog::display()
{
    cout<<"Messages Posted :\n";
    for(int i=0;i<message.size();i++)
            cout<<i+1<<". "<<message[i]<<endl;
    cout<<endl;
}
void Blog::post()
{
    string p;
    cout<<"Enter new message\n";
    cin>>p;
    cout<<"Messages Posted."<<endl<<endl;;
    message.push_back(p);
}
void Blog::del()
{
    int de;
    cin>>de;
    for(int i=0;i<message.size();i++)
        message.erase(message.begin()+de-1);
    cout<<endl;
}

void Viewer ::output()
{   
    int input;
    cout<<"Access data as viewer"<<endl;
    while(1)
    {
    cout<<"Menu options:\n"
        <<"0> Exit\n"<<"1> Dispaly all messages"<<endl;
    cin>>input;
    
    if(input==0) break;
    if(input==1) display();
    }
}
void Owner ::output()
{
    int input;
    cout<<"First, enter data as the owner.\n";
    while(1)
    {
    cout<<"Menu options:\n"
        <<"0> Exit\n"<<"1> Dispaly all messages\n"
        <<"2> Post new message\n"<<"3> Delete message\n"
        <<"Enter command."<<endl;
    cin>>input;
    
    if(input==0) break;
    if(input==1) display();
    if(input==2) post();
    if(input==3) del();
    }
}

int main()
{
    Owner o;
    o.output();
    Viewer v(o);
    v.output();
}