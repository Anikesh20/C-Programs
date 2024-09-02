#include<iostream>
using namespace std;
class COLLEGE{
	public:
		char NAME[30];
		char ADDRESS[30];
		char MAILID[30];
		void getdata(){
			cout<<"Enter name:";
			cin>>NAME;
			cout<<"Enter address:";
			cin>>ADDRESS;
			cout<<"Enter MAILID:";
			cin>>MAILID;
		}
		void putdata(){
			cout<<"Name:"<<NAME<<"\n"<<"Address:"<<ADDRESS<<"\n"<<"Mailid:"<<MAILID<<endl;
		}
};
class FACULTY:public COLLEGE{
	public:
		char ENGINEERING[30];
		char MANAGEMENT[30];
		char HUMANATIES[30];
		void getdata(){
			getdata();
		}
		void putdata(){
			putdata();
		}
};
class DEPARTMENTS:public COLLEGE{
	public:
		char BBA[30];
		char BCA[30];
		char BCE[30];
		void getdata(){
			getdata();
		}
		void putdata(){
			putdata();
		}
};
int main(){
	FACULTY F;
	F.getdata();
	F.putdata();
	DEPARTMENTS D;
	D.getdata();
	D.putdata();
}
