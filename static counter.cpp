#include<iostream>
using namespace std;
class student
{
private:
	int rollno;
	char name[30];
	int counter;
	int count;
	int r,n;
public:
	void staticshow()
	{
		cout<<"no.of stds"<<counter;
	}	
};
void student()
{
	int rollno;
	char name[30];
	cout<<"Enter roll number and name of "<<count+1<<"the student "<<endl;
	cin>>r>>n;
	rollno=r;
	strcpy(name,n);
	count++;
}
void student::display()
{
	cout<<name<<" :Total students="<<count<<endl;
}
int main()
{
	student s1;
	s1.getdata();
	student::showcount();
	student s2;
	s2.getdata();
//  student::showcount();
	s1.display();
	s2.display();
}