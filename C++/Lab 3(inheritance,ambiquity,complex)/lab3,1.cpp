#include<iostream>
using namespace std;
class staff{
	protected:
		int staff_id;
		public:
			voidget_id(){
				cout<<"Enter staff id:";
				cin>>staff_id;
			
			}
			voiddisplay_id(){
				cout<<"\nStaff id:"<<staff_id<<endl;
			}
};
class lecturer:public staff{
	char subject[10];
	public:
		voidget_subject(){
		voidget_id();
			cout<<"Enter subject:";
			cin>>subject;
		}
		voiddisplay_subject()
		{
			voiddisplay_id();
			cout<<"Subject of lecture is:"<<subject<<endl;
		}
};
class admin:public staff{
	char post_department[10];
	public:
		voidget_post(){
			voidget_id();
			cout<<"Enter post:";
			cin>>post_department;
		}
		voiddisplay_post(){
			voiddisplay_id();
			cout<<"post of admin is:"<<post_department<<endl;
		}
};
class librarian:public staff{
	char shift[10];
public:
	voidget_shift(){
		voidget_id();
		cout<<"Enter the shift:";
		cin>>shift;
	}
	voiddisplay_shift(){
		voiddisplay_id();
		cout<<"shift:"<<shift<<endl;
	}
	};
	int main(){
		lecturer l;
		cout<<"\n.......Input lecturer details......\n";
		l.voidget_subject();
		admin a;
		cout<<"\n.......Input Admin details......\n";
		a.voidget_post();
		librarian l1;
		cout<<"\n.......Input librarian details......\n";
		l1.voidget_shift();
		cout<<"\n.......Lectureur Details.......\n";
		l.voiddisplay_subject();
		cout<<"\n.......Admin Details.......\n";
		a.voiddisplay_post();			
		cout<<"\n.......Librarian Details.......\n";
		l1.voiddisplay_shift();
	}
