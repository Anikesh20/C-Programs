#include<iostream>
using namespace std;
class String{
	public:
		string data;
		public:
			String(string str):data(str){}
			String operator +(const String &obj){
				return String(data+obj.data);
			}
			string print(){
				return data;
			}
};
int main(){
	String s1("HELLO FUCKING");
	String s2(" WORLD");
	String s3=s1+s2;
cout<<"DATA="<<s3.print();
	return 0;
}
