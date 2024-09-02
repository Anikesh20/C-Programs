#include<iostream>
using namespace std;
class mathematics{
	int x,y;
	public:
		void input();
		void add();};
		void mathematics::input()
		{
		
			cout <<"input two integers\n";
			cin>>x>>y;
		}
		void mathematics::add()
		{
			cout<< "result:"<<x+y;
			
		}
		

int main(){
	mathematics m;
	m.input();
	m.add();
	return 0;
}
