# include <iostream> 
using std::cout;
using std::endl;
# include <cctype>
using std::islower;
using std::toupper;

void convertToUppercase(char*);
void printCharacters(const char *); //print using pointer to const data；指针指向的变量其数值不改变 
int * const ptr = &x; //指针指向的内存地址不改变，即不能再使之变为ptr = &y 

int main(){
	char phrase[] = "characters and $32.96";
	
	cout << "The phrase before conversion is: " << phrase;
	convertToUppercase(phrase);
	cout << "\nThe phrase after conversion is: " << phrase << endl;
	
	return 0;
}

void convertToUppercase(char* sPtr){
	while(*sPtr != '\0'){
		if(islower(*sPtr)){  //islower()判断字母大小写的函数，返回true或false 
			*sPtr = toupper(*sPtr);  //toupper()和tolower() 改变字母大小写 
		}
		sPtr ++; //指针加法，跳到数组的下一个元素 
	}
}
