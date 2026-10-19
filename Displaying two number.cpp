#include<iostream>
using namespace std;
class Number{
	private:
		int a,b;
	public:
		Number(){
			a=15;
			b=20;
		}
		void show(){
			cout<<a<<endl;
			cout<<b;
		}
	};
int main(){
	Number n;
	n.show();
}
	



