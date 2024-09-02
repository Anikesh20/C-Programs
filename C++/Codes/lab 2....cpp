//defining constructer outside the class
#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
		student();
		void display();};
		student::student()
		{
		cout<<"Enter the roll no.";
		cin>>rno;
		cout <<"Enter the name:";
		cin>>name;
		cout<<"enter the fee:";
		cin>>fee;}
		void student::display()
		{
			cout <<endl<<rno<<"\t"<<name<<"\t"<<fee;
			
		}
		int main()
		{
			student s;
			s.display();
			return 0;
		}
