# include <iostream>
using std::cout;
using std::endl;

void Swap(int &, int &);
int main(){
	int a = 1;
	int b = 2;
	
	cout<<"before the swap function, a= "<<a<<" b= "<<b<<endl;
	Swap(a,b);
	cout<<"after the swap function, a= "<<a<<" b= "<<b<<endl;
	
	return 0;
}

//值传递：
//Swap函数采用值传递的方式，传入的实参实际上是a和b的副本而非其本身，所以对副本的改变并不会反应到a和b本身上 
//void Swap(int x, int y){
//	int temp = x;
//	x = y;
//	y = temp;
//}
//函数调用模式 Swap(a, b);

//引用传递:
//Swap函数采用引用传递的方式，传入的实参实际上是a和b的引用，对引用的改变会直接反应到a和b本身上
 void Swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}
//函数调用模式 Swap(a, b);

//指针传递:
//1.改变指针本身：
//Swap函数采用指针传递的方式，传入的实参实际上是a和b的指针的副本，而且改变的是副本本身而非其间接引用，所以不会影响的指针所指向的值，即a和b本身上 
//void Swap(int* x, int* y){
//	int* temp = x;
//	x = y;
//	y = temp;
//}
//函数调用模式 Swap(&a, &b); 

//2.改变指针的间接引用：100
//
void Swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
} 

