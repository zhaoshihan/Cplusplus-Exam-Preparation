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
	
	pa = pb; //Aѡ�� 
	pa ->display1();
	pa ->display2(); //���ܵ��� 

	pb = pa; //Bѡ�� ���� invalid conversion from 'A*' to 'B*' 

	pa = &b; //Cѡ�� 
	pa -> display1();
	pa -> display2(); //���ܵ��� 

	pb = &a; //Dѡ��  ���� invalid conversion from 'A*' to 'B*' 
	return 0;
}
