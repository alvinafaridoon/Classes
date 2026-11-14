#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Add
{
	int a,b;
	public:
		Add()
		{
			a=b=0;
		}
		void input()
		{
			cout<<"enter values of a and b:";
			cin>>a>>b;
		}
		void output()
		{
			cout<<"Value of a is ="<<a<<endl;
			cout<<"Value of b is ="<<b<<endl;
		}
		Add operator+(Add p)
		{
			Add temp;
			temp.a=p.a+a;
			temp.b=p.b+b;
			return temp;
		}
};
int main()
{
	Add x,y,z;
	x.input();
	y.input();
	z=x+y;
	x.output();
	y.output();
	z.output();
return 0;
}

