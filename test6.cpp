# include <iostream>
using namespace std;
# define DEBUG 2
int main(){
	int i = 3;
	# ifndef DEBUG  // == if not define the DEBUG macro
	for( , , )
	cout<< DEBUG << ", "<<i;
	# else
	cout<< i << ", ";
	# endif
	cout << DEBUG;
	
	return 0;
}
