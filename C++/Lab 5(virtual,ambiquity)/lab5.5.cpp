#include<iostream>
using namespace std;
class A{
	public:
	void show(){
		cout<<"Hello from A\n";
		
			}};
			class B:public virtual A{
				public:
						void show(){
		cout<<"Hello from B\n";
			}
			};
class C:public virtual A{
	public:
	void show(){
		cout<<"Hello from C\n";
			}
			};	
class D:public B,public C{
			};		
	int main(){
		D object;
		object.show();
		
		return 0;
	}
