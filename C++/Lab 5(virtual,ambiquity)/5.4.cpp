#include<iostream>
using namespace std;
class A{
	public:
	void show(){
		cout<<"Hello from A\n";
			}};
			class B:virtual public A{
			};
class C:public A{
			};	
			class D:public B,public C{
			};		
	int main(){
		D object;
		object.show();
		
		return 0;
	}
