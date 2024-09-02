#include<iostream>
using namespace std;
class Employee{
	int id;
	char name[30];
	public:
		void getdata();
		void putdata();
};
void Employee::getdata(){
	cout<<"Enter id:";
	cin>>id;
	cout<<"Enter Name:";
	cin>>name;
	cout<<endl;
}
void Employee::putdata(){
	cout<<id<<" ";
	cout<<name<<" ";
	cout<<endl;
}
int main(){
	Employee emp;
	emp.getdata();
	emp.putdata();
	return 0;
}
