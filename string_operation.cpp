# include <iostream>
# include <cstring>
using namespace std;

int main(){
	char a[4];
	char *p = "xyz";
	strcpy(a, p);
	cout <<a[0]<<a[1]<<a[2]<<a[3]; 
}
