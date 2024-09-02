#include<iostream>
using namespace std;
int main()
{
	int hour1, minute1, second1;
	int hour2, minute2, second2;
	int hour, minute , second;
	cout<<"***Enter the first time***"<<endl;
	cout<<"Hours:"; cin>>hour1;
	cout<<"minutes:"; cin>>minute1;
	cout<<"second:"; cin>>second1;
	
	cout<<"***Enter second time***"<<endl;
	cout<<"Hours:"; cin>>hour2;
	cout<<"minutes:"; cin>>minute2;
	cout<<"second:"; cin>>second2;
	
	second=second1+second2;
	minute=minute1+minute2+(second/60);
	hour=hour1+hour2+(minute/60);
	minute=minute%60;
	second=second%60;
	cout<<"Total time is "<<hour<<" hours "<<minute<<" minutes "<<second<<" seconds";
	}
