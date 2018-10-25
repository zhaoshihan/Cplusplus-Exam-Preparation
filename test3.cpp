# include <iostream>
using namespace std;
class A{
	public:
		A(){
			cout << "A";
		}
};
class B{
	public:
		B(){
			cout << "B";
		}
};
class C:public A{
	public:
		C(){
			cout << "C";
		}
		B b;
//	private:
		
};

int main(){
	C obj;
	return 0;
}
