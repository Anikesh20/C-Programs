//explicit copy constructer
#include<iostream>
using namespace std;
class sample {
	int id;
	public:
		void init(int x)
		{
			id=x;
			
		}
		sample(){}
		
		sample(sample &t){
			id=t.id;
			
		}
		void display()
		{
			cout<<endl<<"ID="<<id;
		}
		
		
};
int main()
{
	sample obj1;
	obj1.init(10);
	obj1.display();
	sample  obj2(obj1);
	obj2.display() ;
	return 0;
	
}
