# include <iostream>
using namespace std;

int main(){
	int array[3] = {1, 2, 3};
	cout << array << endl;
	cout << &array << endl;
	cout << array[0] << endl;
	cout << &array[0] << endl;
	cout << &array[1] << endl;
	cout << array+1 << endl;
	cout << *(array+1) << endl;
	cout << array[1] << endl;
	
}
