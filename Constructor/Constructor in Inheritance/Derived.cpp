#include<iostream>
using namespace std;
class Base{
	int x;
	public:
		Base(){
			cout<<"Base default constructor\n";
		}
};

class Derived : public Base{
	int y;
	public:
		Derived(){
			cout<<"Derived default constructor\n";
		}
};

int main(){
	Derived d1;
	return 0;
}
