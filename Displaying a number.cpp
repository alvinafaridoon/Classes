#include<iostream>
using namespace std;
class Number{
	private:
		int a;
	public:
		Number(){
			a=5;
		}
	void display();
};
void Number::display(){
	cout<<a;
}
int main(){
	Number n;
    n.display();
return 0;
}


