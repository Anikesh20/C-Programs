#include<iostream>
using namespace std;
class phone{
	public:
		double cost;
 int slots;
};
int main(){
	phone y6;
	phone y7;
	y6.cost=100.0;
	y6.slots=2;
	y7.cost=200.0;
	y7.slots=2;
	cout << "cost of huawei y6:"<<y6.cost << endl;
	cout << "cost of huawei y7:"<<y7.cost << endl;
	cout <<" Number of card slots for huawei y6:"<<y6.slots<<endl;
	cout <<" Number of card slots for huawei y7:"<<y7.slots<<endl;
	
	return 0;
}
