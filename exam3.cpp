# include <iostream>
using std::cout;
using std::endl;

class A{
	public:
		display1(){
			cout << "This is class A" << endl;
		}
};

class B:public A{
	public:
		display2(){
			cout << "This is class B" << endl;
		}
};

int main(){
	A *pa;
	A a;
	B *pb;
	B b;
	
	pa = pb; //A选项 
	pa ->display1();
	pa ->display2(); //不能调用 

	pb = pa; //B选项 错误 invalid conversion from 'A*' to 'B*' 

	pa = &b; //C选项 
	pa -> display1();
	pa -> display2(); //不能调用 

	pb = &a; //D选项  错误 invalid conversion from 'A*' to 'B*' 
	return 0;
}
