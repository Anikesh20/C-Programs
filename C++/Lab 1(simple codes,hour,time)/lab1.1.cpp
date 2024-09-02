#include<iostream>
using namespace std;
class phone
{
	public:
		double cost;
		int slots;
};
int main()
{
	phone Y6;
	phone Y7;
	Y6.cost= 100.0;
	Y6.slots= 2;
	Y7.cost=200.0;
	Y7.slots= 2;
	cout<<"Cost of Huawei Y6:"<<Y6.cost<<endl;
	cout<<"COst of Huawei Y7:"<<Y7.cost<<endl;
	cout<<"No of card slots for Huawei Y6:"<<Y6.slots<<endl;
	cout<<"No of cards slots for Huawei Y7:"<<Y7.slots<<endl;
	return 0;
}
