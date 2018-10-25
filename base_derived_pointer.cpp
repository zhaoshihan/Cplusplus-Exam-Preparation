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
	pb->f(); //û���麯��������ָ��ָ��ʲô����󣬵���ʱһ�ɸ�������������ĺ���f()���� 
	delete pb;
	Base_class *pb2 = new Base_class();
	pb2->f();
	delete pb2;
	Derived_class d;
	Base_class & rb=d;
	rb.f(); //û���麯������������ʲô����󣬵���ʱһ�ɸ�������������ĺ���f()���� 
	Base_class b;
	Base_class & rb2 = b;
	rb2.f();
}
