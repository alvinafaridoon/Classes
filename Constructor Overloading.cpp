#include<iostream>
#include<conio.h>
using namespace std;
class Student{
	private:
		int a,b;
	public:
		Student(){
			a=0;
			b=0;
		}
		~Student(){
			cout<<"Object destory\n";
		}
		Student(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
	};
int main(){
	Student s1(20,40);
	s1.display();
			

}

