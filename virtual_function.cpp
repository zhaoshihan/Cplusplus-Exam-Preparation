# include <iostream>
using std:: cout;
using std:: endl;

struct Base{
	void foo(){  //虚函数，根据指针指向的对象类型来决定调用那种形式 
		cout << "Base" << endl;
	}
};

struct Derived:public Base{  //此处要注意：因为继承自Base类，所以存在两个函数foo() 
	void foo(){
		cout << "Derived" << endl;
	}
};

int main(){
	Base *p;
	p = new Derived();
	p->foo(); // 若无虚函数，则不管指针指向何类，调用函数时都根据指针本身类型（Base）的所属函数来调用 
	delete p;  //delete后只能跟指针变量，表示删除该指针指向的内容 
	p = new Base();
	p->foo();
	delete p;
	
	return 0;
}
