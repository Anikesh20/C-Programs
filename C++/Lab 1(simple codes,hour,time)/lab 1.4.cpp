#include<iostream>
using namespace std;
class simple{
	int p,t,r;
	public:
		int input(){
			cout<<"Input  principle time rate:";
			cin>>p>>t>>r;
		}
		float calc(){
			cout<<"Results:"<<p*t*r/100.0;
		}
};

int main(){
	simple m;
	m.input();
	m.calc();
	return 0;
}
