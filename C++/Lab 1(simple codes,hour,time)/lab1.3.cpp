#include<iostream>
using namespace std;
class Mathematics{
	int x,y;
	public:
		void input();
		void add();
	
		
};
void Mathematics :: input(){
			cout<<"Input two integers \n";
			cin>>x>>y;
		}
void Mathematics :: add()
		{
			cout<<"Result:"<<x+y;
		}
int main()
{
	Mathematics m;
	m.input();
	m.add();
	return 0;
}
