#include<iostream>
#define MEGABYTE 8000;
using namespace std;

double fillsize(double bitrate,double clip)
{
	double kilobit,megabyte;
	kilobit=60*bitrate*clip;
	megabyte=kilobit/MEGABYTE;
	return megabyte;
}

int main()
{
	double bitrate,clip,megabyte;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	
	cout<<"Bit rate:";
	cin>>bitrate;
	cout<<"The duration in minutes of a video clip:";
	cin>>clip;
	megabyte=fillsize(bitrate,clip);
	cout<<"The file size of the video clip in megabytes:"<<megabyte<<endl;
}
