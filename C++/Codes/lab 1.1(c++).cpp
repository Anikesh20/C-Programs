#include <iostream>
using namespace std;
int main(){
	//for first time
	int hour1,minute1,second1;
	//for second time
	int hour2,minute2,second2;
	//for the total(sum) time
	int hour,minute,second;
	//taking the input from user
	cout<<"****enter first time****"<<endl;
	  cout <<"hours:";
	  cin>>hour1;
	  cout<<"Minutes:";
	  cin>>minute1;
	  cout<<"seconds:";
	  cin>>second1;
	  //taking input from user
	  cout<<"****enter second time****"<<endl;
	  cout <<"hours:";
	  cin>>hour2;
	  cout<<"Minutes:";
	  cin>>minute2;
	  cout<<"seconds:";
	  cin>>second2;
	  //adding the entered times
	  second=second1+second2;
	  minute=minute1+minute2+(second/60);
	  hour=hour1+hour2+(minute/60);
	  minute=minute%60;
	  second=second%60;
	  //displaying total time
	  cout<<"total time is:"<<hour<<"hour"<<minute<<"minute"<<second<<"seconds";
	  
}
