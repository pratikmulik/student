#include "student.h"
using namespace std;

Student(string name,int roll,double m1,double m2,double m3)
		{
			this->name=name;
			this->roll=roll;
			this->m1=m1;
			this->m2=m2;
			this->m3=m3;
		}
		void ShowStudent()
		{
		cout<<"Name="<<this->name<<"Roll="<<this->roll<<"M1="<<this->m1<<"M2="<<this->m2<<"M3="<<this->m3;	
		}

