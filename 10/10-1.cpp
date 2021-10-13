#include<iostream>
#include<cstdlib>
using namespace std;
typedef double* TD;
class TwoD
{
	public:
		TwoD();//default
		TwoD(int r,int c);
		TwoD(const TwoD& b);//copy constructor
		~TwoD();//destructor
		void setmb(int x,int y);
		double getmb(int x,int y)const ;
		int getR()const ;
		int getC()const ;
		TwoD& operator =(const TwoD& right);//assignment operator//Don't use friend?
		friend TwoD operator +(TwoD& ,TwoD&); 
		double operator ()(int i,int j);
		TD operator ()(int i);
	private:
		TD *a;
		int MaxRows,MaxCols;
};
int main()
{
	int r,c;
	TwoD p1,p2,p3;
	cout<<"Enter the row and column dimensions of the array:"<<endl;
	cin>>r>>c;
	p1=TwoD(r,c);
	cout<<"Enter "<<r<<" rows of "<<c<<" doubles each:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			p1.setmb(i,j);
		}
	}
	cout<<"Echoing the two dimensional array, matix1:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p1.getmb(i,j)<<" ";
		}
		cout<<endl;
	}

	cout<<"Enter the row and column dimensions of the array:"<<endl;
	cin>>r>>c;
	p2=TwoD(r,c);
	cout<<"Enter "<<r<<" rows of "<<c<<" doubles each:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			p2.setmb(i,j);
		}
	}
	cout<<"Echoing the two dimensional array, matix2:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p2.getmb(i,j)<<" ";
		}
		cout<<endl;
	}

	cout<<"Assigning 2 to 3:"<<endl;
	p3=p2;
	//cout<<&p2<<endl<<&p3<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p3.getmb(i,j)<<" ";
		}
		cout<<endl;
	}
	cout<<"Array 3:"<<endl;

	cout<<"Array1+Array2"<<endl;
	p3=p2+p1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p3.getmb(i,j)<<" ";
		}
		cout<<endl;
	}
}

TwoD::TwoD():MaxRows(0),MaxCols(0)
{
	a=new TD[MaxRows];
}
TwoD::TwoD(int r,int c):MaxRows(r),MaxCols(c)
{
	a=new TD[MaxRows];
	for(int i=0;i<MaxRows;i++)
		a[i]=new double [MaxCols];
}
TwoD::TwoD(const TwoD& b):MaxRows(b.MaxRows),MaxCols(b.MaxCols)
{
	a=new TD[MaxRows];
	for(int i=0;i<MaxRows;i++)
		a[i]=new double [MaxCols];
	for(int i=0;i<MaxRows;i++)
	{
		for(int j=0;j<MaxCols;j++)
		{
			a[i][j]=b.getmb(i,j);//Problem
		}
	}
}
TwoD::~TwoD()
{
	for(int i=0;i<MaxRows;i++)
		delete [] a[i];	
	delete [] a;
}
void TwoD::setmb(int x,int y)
{
	cin>>a[x][y];
}
double TwoD::getmb(int x,int y)const
{
	return a[x][y];
}
int TwoD::getR()const
{
	return MaxRows;
}
int TwoD::getC()const
{
	return MaxCols;
}
TwoD& TwoD::operator =(const TwoD& right)
{
	if(this==&right)
	{
		return *this;
	}
	else
	{
		for(int i=0;i<MaxRows;i++)
		{
			delete [] a[i];
		}
		delete [] a;
		a=new TD[right.MaxRows];
		for(int i=0;i<right.MaxRows;i++)
		{
			a[i]=new double[right.MaxCols];
		}
		MaxRows=right.MaxRows;
		MaxCols=right.MaxCols;
		for(int i=0;i<MaxRows;i++)
		{
			for(int j=0;j<MaxCols;j++)
			{
				a[i][j]=right.a[i][j];
			}
		}
		return *this;
	}
}
TwoD operator +(TwoD& A,TwoD& B)
{
	TwoD temp(A.MaxRows,A.MaxCols);
	for(int i=0;i<A.MaxRows;i++)
	{
		for(int j=0;j<A.MaxCols;j++)
		{
			temp.a[i][j]=A.a[i][j]+B.a[i][j];
		}
	}
	return temp;
}
double TwoD::operator ()(int i,int j)
{
	return a[i][j];
}
TD TwoD::operator ()(int i)
{
	return a[i];
}
