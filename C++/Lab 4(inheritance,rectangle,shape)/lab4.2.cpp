#include<iostream>
using namespace std;
class student{
	public:
 char name[30];
 int dob,rollno;
 void getdata(){
 	cout<<"Enter student name:";
 	cin>>name;
 	cout<<"Enter roll no:";
 	cin>>rollno;
 	cout<<"Enter student date of birth:";
 	cin>>dob;
 }	
 void disount(){
 	cout<<"Discount will be given on the basis of roll no.";
 }
 virtual void dispresult(){}

};
class UG:public student{
	public:
	void ug_info(){
		cout<<"***Enter Info of undergraduate students***"<<endl;
		getdata();}
		void dispresult(){
		cout<<"***Info of undergraduate students***"<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Roll no:"<<rollno<<endl;
		cout<<"Date of birth:"<<dob<<endl;
		}
	
};
class PG:public student{
	public:
	void pg_info(){
		cout<<"***Enter Info of postgraduate students***"<<endl;
		getdata();
	}
		void dispresult(){
		cout<<"***Info of postgraduate students***"<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Roll no:"<<rollno<<endl;
		cout<<"Date of birth:"<<dob<<endl;
	}
};
int main(){
	UG U;
	PG P;
	U.ug_info();
	P.pg_info();
	U.dispresult();
	P.dispresult();
}
