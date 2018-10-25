# include <iostream>
using namespace std;

template <typename T>
void reverse(T A[], int size){
	for(int i=0, j=size -1; i< j; i++, j--){
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
	
}

int main(){
	const int size = 4;
	int A[size] = {1, 2, 3, 4};
	reverse(A, size);
	for(int i=0; i<size; i++){
		cout << A[i];
	}
}
