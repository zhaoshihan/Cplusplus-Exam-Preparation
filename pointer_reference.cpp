#include <iostream>
using std :: cout;
using std :: endl;

void foo1(int *p){  //���þ��Ǳ���������(int &b = a; b���Կ�����a������С��)��ָ����ָ����� 
	*p = 100;
}
void foo2(int &p){
	p = 10;
}

int cubeByValue1(int a){  //������ֵ�������õ�����ע�⴫������ֱ�Ӹı䴫���ԭʼ������ֵ 
	return a*a*a;
}
int cubeByValue2(int &p){
	int a = p*p*p;
	return a;
}

int main(){
	int i = 10;
	int *a = &i;//����a��һ��ָ�룬��ָ�����i
	int &b = i;//����b��һ�����ã����Ǳ���i������
	int * &c = a;//����c��һ�����ã�����ָ��a�����á���ʱ������Ϊa��c �÷���ͬ��������С�������� 
//	int & *d;//����d��һ��ָ�룬��ָ�����ã������ò���ʵ�壬�������Ǵ����
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

