#include<iostream>
using namespace std;
int f(int i) {
	static int k = 1;
	for (int j = 1; j < i; j++)
		k = j;
	return ++k;
}
int main() {
	for (int i = 0; i < 5; i++)
		cout << f(i) << " ";
 }

