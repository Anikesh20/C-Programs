#include<iostream>
#include<string>
using namespace std;
class car{
	private:
		int car_id;
		char car_name[20];
		int marks;
		public:
			static int static_member;
			car(){
				static_member;
			}
			void inp(){
				cout<<"\nEnter the id of the car"<<endl;
			
			cin>>car_id;
			cout<<"Enter the name of the car:"<<endl;
			cin>>car_name;
			cout<<"Number of the marks(1-10):"<<endl;
			cin>>marks;
		}
		void disp(){
			cout<<"Id of the car:"<<car_id<<endl;
			cout<<"Name of the car:"<<car_name<<endl;
			cout<<"Marks:"<<marks;
			
		}
};
int car::static_member=0;
int main(){
	car c1;
	c1.inp();
	c1.disp();
	car c2;
	c2.inp();
	c2.disp();
	cout<<"No of object created in the class:"<<car::static_member<<endl;
}
