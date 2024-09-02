#include<iostream>
using namespace std;
class A{
	public:
		void display()
		{
			std::cout<<"class A"<<std::endl;
		}
};
class B{
	public:
		void display()
		{
			std::cout<<"class B"<<std::endl;
			
		}
};
class C: public A
{
	void view()
	{
	    display();
		
	}
};
class D: public B
{
	void view()
	{
	    display();
		
	}
};
int main()
{
	C c;
	D d;
	c.display();
	d.display();
	return 0;
}
