#include<iostream>
#include<sstream>
#include<vector>
using namespace std; 
class student{
	string school;
	string degree;
	public:
		void getedu(){
			cout<<"Enter name of school or university:";
			cin>>school;
			cout<<"(Highschool, Bachelor's, Master's.PhD):";
			cin>>degree;
		}
		void putedu()const{
		cout<<"\n School or University:"<<school<<endl;
		cout<<"\n Highest degree earned:"<<degree<<endl;
		}
};
class employee{
	string name;
	unsigned long number;
	public:
				void getdata(){
			cout<<"\nEnter name:";
			cin>>name;
			cout<<"Enter Number:";
			cin>>number;
		}
		void putdata()const{
		cout<<"\n Name:"<<name<<endl;
		cout<<"\n Number:"<<number<<endl;
	}
};
class manager {
	private:
		string title;
		double dues;
		employee emp;
		student stu;
		public:
		void getdata(){
			emp.getdata();
			cout<<"Enter title:";
			cin>>title;
			cout<<"Enter golf club dues:";
			cin>>dues;
			stu.getedu();
		}
		void putdata()const{
		emp.putdata();
		cout<<"\n Title:"<<title;
		cout<<"\n Golf club dues"<<dues;
		stu.putedu();
		}
};
class scientist{
	private:
		int pubs;
		employee emp;
		student stu;
	public:
		void getdata(){
			emp.getdata();
			cout<<"Enter number of pubs:";
			cin>>pubs;
			stu.getedu();
		}
		void putdata()const{
		emp.putdata();
		cout<<"\n Number of publications:"<<pubs;
		stu.putedu();
		}
};
class laborer{
	private:
		employee emp;
		public:
		void getdata(){
			emp.getdata();
		}
		void putdata()const{
		emp.putdata();
		}
};




int main()
{	

	manager m1;
	scientist s1,s2;
	laborer l1;
	cout<<endl;
	cout<<"Enter Data for manager 1:";
	m1.getdata();
	cout<<"Enter Data for scientist 1:";
	s1.getdata();
	cout<<"Enter Data for scientist 2:";
	s2.getdata();
	cout<<"Enter Data for laborer 1:";
	l1.getdata();
	cout<<"\nData for manager 1:";
	m1.putdata();
		cout<<"\nData for scientist 1:";
	s1.putdata();
		cout<<"\nData for scientist 2:";
	s2.putdata();
	cout<<"Data on Laborer 1:";
	l1.putdata();
	cout<<endl;

	return 0;
}

