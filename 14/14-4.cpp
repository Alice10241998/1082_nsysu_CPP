#include<iostream>
using namespace std;

class UniversityStaff
{
    public:
    UniversityStaff():name("NSYSU"){};
    UniversityStaff(string theName):name(theName){};
    UniversityStaff(const UniversityStaff& theObject){name=theObject.name;};
    string getName()const{return name;};
    UniversityStaff& operator =(const UniversityStaff& rtSide){name=rtSide.name;};
    friend istream& operator >>(istream& inStream,UniversityStaff& staffObject);
    friend ostream& operator <<(ostream& outStream,const UniversityStaff& staffObject);
    
    private:
    string name;
};
 
class Student
{
    public:
    Student():name("John"),num(123012345),proctor("NSYSU"){};
    Student(string n,int m,string p){name=n;num=m;proctor=p;};
    Student& operator =(const Student& rtSide);
    void output();
    protected:
    string name;
    int num;
    UniversityStaff proctor;
};

class ScienceStudent : public Student
{
    public:
    ScienceStudent():Student("Curry",222012345,"NTU"),science("Math"),undergraduate("undergraduate"){};
    ScienceSStudent(string Science,string undergraduate,Student thestudent);
    ScienceStudent& operator =(const ScienceStudent& rtSide);
    void output();
    private:
    string science;
    string undergraduate;
};

void Student::output()
{
    cout<<proctor.getName()<<endl<<"B"<<num<<endl<<name<<endl;
}
void ScienceStudent::output()
{
    cout<<proctor.getName()<<endl<<"C"<<num<<endl<<name<<endl<<science<<endl<<undergraduate<<endl;
}
Student&Student:: operator =(const Student& rtSide)
{
    if(this==&rtSide)
		return *this;
	else
	{
		name=rtSide.name;
		num=rtSide.num;
		proctor=rtSide.proctor;
		return *this;
	}
}
ScienceStudent&ScienceStudent:: operator =(const ScienceStudent& rtSide)
{
    if(this==&rtSide)
		return *this;
	else
	{
		name=rtSide.name;
		num=rtSide.num;
		proctor=rtSide.proctor;
        science=rtSide.science;
        undergraduate=rtSide.undergraduate;
		return *this;
	}
}

int main()
{
    cout<<"Student Test1(constructed) Data:"<<endl;
    Student S1;
    S1.output();
    cout<<endl;
    
    cout<<"Student Test2(assigned) Data:"<<endl;
    Student S2=S1;
    S2.output();
    cout<<endl;

    cout<<"Student Test3(copy constructed) Data:"<<endl;
    Student S3(S1);
    S3.output();
    cout<<endl;

    cout<<"ScienceStudent Test1(constructed) Data:"<<endl;
    ScienceStudent SS1;
    SS1.output();
    cout<<endl;
    
    cout<<"ScienceStudent Test2(assigned) Data:"<<endl;
    ScienceStudent SS2=SS1;
    SS2.output();
    cout<<endl;

    cout<<"ScienceStudent Test3(copy constructed) Data:"<<endl;
    ScienceStudent SS3(SS1);
    SS3.output();
    cout<<endl;
}