# include <iostream>
# include <cstring>
using namespace std;
int main(){
	char *s = "Hello World!";
	int length = strlen(s);  //<cstring>�����strlen()������ȡ�ַ������ȣ�ע������ļ�����������β'0\'�����Ǵ����ݣ� 
	cout << length <<endl;
	for(int i=0; i<length; i+=2){
		if(s[i] > 0)
   			cout << s[i];
		else
			return 0;
	}
}
