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

//ֵ���ݣ�
//Swap��������ֵ���ݵķ�ʽ�������ʵ��ʵ������a��b�ĸ��������䱾�����ԶԸ����ĸı䲢���ᷴӦ��a��b������ 
//void Swap(int x, int y){
//	int temp = x;
//	x = y;
//	y = temp;
//}
//��������ģʽ Swap(a, b);

//���ô���:
//Swap�����������ô��ݵķ�ʽ�������ʵ��ʵ������a��b�����ã������õĸı��ֱ�ӷ�Ӧ��a��b������
 void Swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}
//��������ģʽ Swap(a, b);

//ָ�봫��:
//1.�ı�ָ�뱾��
//Swap��������ָ�봫�ݵķ�ʽ�������ʵ��ʵ������a��b��ָ��ĸ��������Ҹı���Ǹ�����������������ã����Բ���Ӱ���ָ����ָ���ֵ����a��b������ 
//void Swap(int* x, int* y){
//	int* temp = x;
//	x = y;
//	y = temp;
//}
//��������ģʽ Swap(&a, &b); 

//2.�ı�ָ��ļ�����ã�100
//
void Swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
} 

