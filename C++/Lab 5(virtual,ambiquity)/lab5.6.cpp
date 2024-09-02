#include<iostream>
using namespace std;
class A{
	public:
void display(){
			std::cout<<"Class A"<<std::endl;
		}
};
class B{
	public:
	void display(){
				std::cout<<"Class B"<<std::endl;
		}
};
class C:virtual public A{
	void view(){
		display();
				}
};
int main(){
	C c;
	c.display();
	return 0;
}
