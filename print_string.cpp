# include <iostream>
# include <cstring>
using namespace std;
int main(){
	char *s = "Hello World!";
	int length = strlen(s);  //<cstring>里面的strlen()函数，取字符串长度（注意这里的计数不包括结尾'0\'，就是纯内容） 
	cout << length <<endl;
	for(int i=0; i<length; i+=2){
		if(s[i] > 0)
   			cout << s[i];
		else
			return 0;
	}
}
