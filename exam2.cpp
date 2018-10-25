# include <iostream>
using std::cout;
using std::endl;

template<typename T>
void printArray(const T *array, int count){
	for(int i=0; i<count; i++){
		cout << array[i] <<" ";
	}
} 

int main(){
	int array[7]; //array={};不管花括号里赋予几个值（当然不能多于7个），都算数组已初始化 
	printArray(array, 7);
	
	return 0;
}
