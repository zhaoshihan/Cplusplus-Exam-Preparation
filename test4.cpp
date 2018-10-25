# include <iostream>
using namespace std;
class A{
	public:
		A(){
			cout << "A::A() called.\n";
		}
		virtual ~A(){
			cout << "A::~A() called.\n";
		}
};
class B:public A{
	public:
		B(int i){
			cout << "B::B() called.\n";
			buf = new char[i];
		}
		virtual ~B(){
			delete [] buf;
			cout << "B::~B() called.\n";''
		}
	private:
		char *buf;
};

int main(){
	A *a = new B(15);
	delete a;
	return 0;
}
