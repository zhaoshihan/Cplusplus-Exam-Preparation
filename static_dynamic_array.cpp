# include <iostream>
# include <cstring>
using namespace std;

int main(){
//	//һά��̬����array�� 
//	const int length = 10;
//	int array[length] = {1,2,3,4,5,6,7,8,9,10};
//	
//	// һά��̬����p: 
//	int size = 50; //һ����̬���������Ըı� 
//	int * p = new int[size];
//	memset(p,0,sizeof(int)*size);
//	cout << "p address is " << p <<endl;
//	p[10] = 10;  //�����е�11��Ԫ�ظ�ֵΪ10 
//	cout << *(p+10)<< endl;
	
	//��̬��ά����martix: 
//	const int n=3;
//	int martix[n][n] = {{1,2,3}, {4,5,6}, {7,8,9}};
//	cout << "martix address is " << &martix<< endl;
//	cout << "martix[1][2] is " << martix[1][2] << endl;
//	cout << *(*(martix+1)+2) <<endl;
//	cout << **(martix+1);
	
	//��̬��ά����q�� 
	int row = 20, column = 30;
	int ** q = new int* [row];
	for(int i=0; i<row; i++){
		q[i] = new int[column];
		memset(q[i], 0, sizeof(int)*column);
	}
	cout << "q address is "<< q <<endl;
	q[1][2] = 99;
	cout << *(*(q+1)+2);
	
	for(int i=0; i<row; i++){
		delete [] q[i];
	}
	delete [] q;
			
}
