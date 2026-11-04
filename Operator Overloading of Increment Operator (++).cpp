#include<iostream>
using namespace std;
class Count{
	private:
		int n;
	public:
		Count(){
			n=0;
		}
	void show(){
		cout<<n;
	}
	void operator++(){
		n=n+1;
	}
	void operator++(int){
		n=n+1;
	}
};
int main(){
	Count c;
	c++;
	c.show();
	cout<<endl;
	++c;
	c.show();
return 0;
}
