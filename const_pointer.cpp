# include <iostream> 
using std::cout;
using std::endl;
# include <cctype>
using std::islower;
using std::toupper;

void convertToUppercase(char*);
void printCharacters(const char *); //print using pointer to const data��ָ��ָ��ı�������ֵ���ı� 
int * const ptr = &x; //ָ��ָ����ڴ��ַ���ı䣬��������ʹ֮��Ϊptr = &y 

int main(){
	char phrase[] = "characters and $32.96";
	
	cout << "The phrase before conversion is: " << phrase;
	convertToUppercase(phrase);
	cout << "\nThe phrase after conversion is: " << phrase << endl;
	
	return 0;
}

void convertToUppercase(char* sPtr){
	while(*sPtr != '\0'){
		if(islower(*sPtr)){  //islower()�ж���ĸ��Сд�ĺ���������true��false 
			*sPtr = toupper(*sPtr);  //toupper()��tolower() �ı���ĸ��Сд 
		}
		sPtr ++; //ָ��ӷ��������������һ��Ԫ�� 
	}
}
