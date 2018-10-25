# include <iostream>
using std::cout;

int func(){
	static int k = -1;
	k++;
	return k;
}

int main(){
	int p = 2;
	while(p < 5){
		if(p%2){
			p = func();
		}
		p ++;
		cout << p << " ";
	}
	
	return 0;
}
