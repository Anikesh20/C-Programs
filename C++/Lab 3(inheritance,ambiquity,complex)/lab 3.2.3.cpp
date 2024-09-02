#include<iostream>
using namespace std;
int division(int a,int b){
	if(b==0)
	throw 0;
	return a/b;
}
int main(){
	int x,y,z;
	cout<<"enter x and y:"<<endl;
	cin>>x>>y;
	try{
		z=division(x,y);
		cout<<"result:"<<z<<endl;
	}
	catch(int e){
		cout<<"exception:Division by 0"<<endl;
	}
	return 0;
}
