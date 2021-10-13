#include<iostream>
using namespace std;
class vector2D
{
	public:
		int getx() const{return x;};
		void setx(int a){x=a;};
		int gety() const{return y;};
		void sety(int a){y=a;};
		friend int operator *(const vector2D& A,const vector2D& B);
		friend istream& operator >>(istream& input,vector2D& a);
	private:
		int x,y;
};
int main()
{
	char temp;
	vector2D A,B;
	cin>>A>>temp>>temp>>B;
	cout<<"("<<A.getx()<<","<<A.gety()<<") * ("<<B.getx()<<","<<B.gety()<<") = "<<A*B<<endl;
}

int operator *(const vector2D& A,const vector2D& B)
{
	int ax,ay,bx,by;
	ax=A.getx();
	ay=A.gety();
	bx=B.getx();
	by=B.gety();
	return (ax*bx)+(ay*by);
}
istream& operator >>(istream& input,vector2D& a)
{
	char temp;
	int x,y;
	input>>temp>>x>>temp>>y;
	a.setx(x);
	a.sety(y);
	return input;
}
