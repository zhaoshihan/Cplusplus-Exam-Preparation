# include <iostream>
using std::cout;
using std::endl;

/*
  explicit 显式构造函数
  implicit 隐式构造函数    不特别标注，一般默认构造函数是隐式的 
  
  explicit关键字的作用：禁止隐式调用类内的单参数构造函数，这主要包括如下三层意思：
  1.该关键字只能用来修饰类内部的构造函数
  2.禁止隐式调用拷贝构造函数
  3.禁止类对象之间的隐式转换
  
  无参数的构造函数和多参数的构造函数总是显示调用
*/
class A{
	public:
		A(int a){
			cout << "create class " << a << " is successful" << endl;
		}
};

class CExplicit{
	public:
		CExplicit();
		explicit CExplicit( bool _explicit){ //explicit只对单参数构造函数有效 
			this->is_explicit = _explicit;
		}
		CExplicit( const CExplicit& other){
			this->is_explicit = other.is_explicit;
		}
		friend void printExplicit(const CExplicit& cx);  //友元函数：使一个非成员函数可以访问类的私有成员 
	private:
		bool is_explicit;
};

void printExplicit(const CExplicit& cx){
	cout << "is_explicit= " << cx.is_explicit << endl;
}
int main( int argc, char* argv[]){
	A a = 10;  
/*
在隐式条件下 A a = 10;等价于 A temp(10); A a = temp;
缺省(impicit)的转换操作：自动将该构造函数对应数据类型的数据转换为该类对象
*/
//	A a(10);
	
//	CExplicit cx1 = true;	
	CExplicit cx1(true);
//	CExplicit cx2 = cx1;
//	printExplicit(cx1);
//	printExplicit(cx2);
//	printExplicit(false);
//	printExplicit(CExplicit(false));  //explicit的优点是可以避免不合时宜的类型变换

	
	return 0;
}
