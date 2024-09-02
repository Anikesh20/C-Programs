#include<iostream>
using namespace std;
class Note
{
	static int num;
	public:
		static int func()
		{
			return num;
		}
};
int Note::num=5;
int main(){
	cout<<"The value of the num is :"<<Note::func()<<endl;
	return 0;
}
