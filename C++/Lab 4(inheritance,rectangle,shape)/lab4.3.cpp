#include<iostream>
using namespace std;
class bowler{
	public:
	char fname[20],lname[20];
	int over,maiden,runs,wkts;
	void getdata(){
		cout<<"****Enter bowler's information*****"<<endl;
	cout<<"first name:";
	cin>>fname;	
	cout<<"last name:";
	cin>>lname;
	cout<<"Overs bowled:";
	cin>>over;
	cout<<"Maiden overs:";
	cin>>maiden;
	cout<<"Runs given:";
	cin>>runs;
	cout<<"Wickets taken:";
	cin>>wkts;
	}
	void putdata(){
		cout<<"****Bowler's information****"<<endl;
	cout<<"first name:"<<fname<<endl;
	cout<<"last name:"<<lname<<endl;
	cout<<"Overs bowled:"<<over<<endl;
	cout<<"Maiden overs:"<<maiden<<endl;
	cout<<"Runs given:"<<runs<<endl;
	cout<<"Wickets taken:"<<wkts<<endl;
	}
};
int main(){
	bowler b;
	b.getdata();
	b.putdata();
}
