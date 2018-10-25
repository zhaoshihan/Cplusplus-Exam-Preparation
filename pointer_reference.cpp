#include <iostream>
using std :: cout;
using std :: endl;

void foo1(int *p){  //引用就是变量的引用(int &b = a; b可以看做是a变量的小名)，指针则指向变量 
	*p = 100;
}
void foo2(int &p){
	p = 10;
}

int cubeByValue1(int a){  //函数传值、传引用的区别，注意传引用则直接改变传入的原始变量的值 
	return a*a*a;
}
int cubeByValue2(int &p){
	int a = p*p*p;
	return a;
}

int main(){
	int i = 10;
	int *a = &i;//这里a是一个指针，它指向变量i
	int &b = i;//这里b是一个引用，它是变量i的引用
	int * &c = a;//这里c是一个引用，它是指针a的引用。此时可以认为a、c 用法相同，仅仅是小名的区别 
//	int & *d;//这里d是一个指针，它指向引用，但引用不是实体，所以这是错误的
//	cout << &a << endl;
//	cout << &c << endl;
//	i ++;
//	cout << i << endl;
//	cout << *a << endl;
//	cout << *c << endl;

	int t = 10;
	int *pointer;
	pointer = &t;
	cout << "pointer before change is: "<< *pointer <<endl;
	foo1(pointer);
	cout << "pointer change into: " << *pointer << endl;
	cout << "t before change is: "<<t << endl;
	foo2(t);
	cout << "t change into: "<<t << endl;
	
	cout << "The cube of a is: " << cubeByValue1(t) << endl; 
	cout << "t value is: " << t << endl;
	cout << "The cube of t is also: " << cubeByValue2(t) << endl;
}

