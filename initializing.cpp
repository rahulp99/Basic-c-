

#include<iostream>
using namespace std;
class box
{
int l,b,h;
public:
void initialise(int val1,int val2,int val3)
{
l=val1;
b=val2;
h=val3;
cout<<l<<b<<h<<endl;
}
};
int main()
{
box b;
b.initialise(1,2,3);
}