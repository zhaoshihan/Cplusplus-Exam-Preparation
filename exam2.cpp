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
	int array[7]; //array={};���ܻ������︳�輸��ֵ����Ȼ���ܶ���7���������������ѳ�ʼ�� 
	printArray(array, 7);
	
	return 0;
}
