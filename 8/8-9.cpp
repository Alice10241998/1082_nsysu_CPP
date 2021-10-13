#include<iostream>
#include<fstream>
#include<vector>
#include<ctime>
using namespace std;
class BoxOfProduce
{
	public:
		BoxOfProduce(){};
		BoxOfProduce(vector<string> b);
		void output();
		void random();
		vector<string> getbox()const{return box;};
		friend const BoxOfProduce operator +(const BoxOfProduce& a,const BoxOfProduce& b);
	private:
		vector<string> box;
};
int main()
{
	srand(time(NULL));
	BoxOfProduce box;
	box.random();
	box.output();
	BoxOfProduce newbox;
	newbox.random();
	newbox.output();
	box=box+newbox;
	box.output();
}

BoxOfProduce::BoxOfProduce(vector<string> b)
{
	for(int i=0;i<b.size();i++)
		box.push_back(b[i]);
}

void BoxOfProduce::random()
{
	fstream file;
	file.open("produce.txt");
	string all[5];
	for(int i=0;i<5;i++)
		file>>all[i];
	file.close();
	for(int i=0;i<rand()%5+1;i++)
	{
		int temp=rand()%5;
		box.push_back(all[temp]);
	}	
}
void BoxOfProduce::output()
{
	cout<<"The box contains:";
	for(int i=0;i<box.size();i++)
		cout<<"("<<i+1<<")"<<box[i]<<" ";
	cout<<endl;
}
const BoxOfProduce operator +(const BoxOfProduce& a,const BoxOfProduce& b)
{
	vector<string> box;
	for(int i=0;i<a.getbox().size();i++)
		box.push_back(a.box[i]);
	for(int i=0;i<b.getbox().size();i++)
		box.push_back(b.box[i]);
	return BoxOfProduce(box);
}
