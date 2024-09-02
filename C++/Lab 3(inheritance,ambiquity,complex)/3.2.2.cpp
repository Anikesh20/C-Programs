#include<iostream>
using namespace std;
class Complex{
	public:
		int real,imaginary;
		void add(Complex C1, Complex C2){
			int x,y;
			x=C1.real+C2.real;
			y=C1.imaginary+C2.imaginary;
			cout<<"\n("<<C1.real<<"+"<<C1.imaginary<<"i)+("<<C2.real<<"+"<<C2.imaginary<<"i)=("<<x<<"+"<<y<<"i)";
		}
		void multiply(Complex C1, Complex C2){
			int x,y;
			x=C1.real*C2.real-C1.imaginary*C2.imaginary;
			y=C1.real*C2.imaginary+C1.imaginary*C2.real;
			cout<<"\n("<<C1.real<<"+"<<C1.imaginary<<"i)*("<<C2.real<<"+"<<C2.imaginary<<"i)=("<<x<<"+"<<y<<"i)";
		}
		
		
};
int main(){
	Complex a,b,c,d,e;
	cout<<"enter real and imaginary part of the first complex number";
	cin>>a.real>>a.imaginary;
		cout<<"enter real and imaginary part of the second complex number";
	cin>>b.real>>b.imaginary;
	c.add(a,b);
	d.multiply(a,b);
}
