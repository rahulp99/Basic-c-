#include<iostream>
using namespace std;

class complex
{
private:
	int real,img;
public:
	complex(int r=0,int i=0)
	{
		real = r;
		img = i;
	}
	void print()
	{
		cout<<real<<"+i"<<img<<endl;
	}
	

	complex operator+(complex const&c)
	{
		return complex(real+c.real,img+c.img);
	}
};
int main()
{
	complex c1(10,5),c2(2,4);
	c1.print();
	c2.print();
	complex c3=c1+c2;
	c3.print();
	return 0;
}