#include<iostream>
using namespace std;
class A{
	public:
		int x;
		};
class B:virtual public A{
	public:
		int y;
		};
class C: virtual public A{
	public:
		int z;
		};
		class D:public B,public C{
			public:
				int w;
		};
	int main(){
		D obj;
		obj.x=1;
		obj.y=2;
		obj.z=3;
		obj.w=4;
		return 0;
	}
