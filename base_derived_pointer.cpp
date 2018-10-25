# include <iostream>
using std:: cout;
using std:: endl;

class Base_class{
	public:
		void f(){
			cout << "This is Base" << endl;
		}
};

class Derived_class:public Base_class{
	public:
		void f(){
			cout << "This is Derived" << endl;
		}
};

int main(){
	Base_class *pb = new Derived_class();
	pb->f(); //没有虚函数，不管指针指向什么类对象，调用时一律根据自身所属类的函数f()调用 
	delete pb;
	Base_class *pb2 = new Base_class();
	pb2->f();
	delete pb2;
	Derived_class d;
	Base_class & rb=d;
	rb.f(); //没有虚函数，不管引用什么类对象，调用时一律根据自身所属类的函数f()调用 
	Base_class b;
	Base_class & rb2 = b;
	rb2.f();
}
