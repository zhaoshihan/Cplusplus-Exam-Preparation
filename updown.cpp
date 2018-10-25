# include <iostream>
using namespace std;

//template <typename T>
//void upDown(T A[]){
//	int length = sizeof(A);
//	for(int i=0; i<length; i++){
//		char up = toupper(A[i]);
//		char down = tolower(A[i]);
//		if(A[i] != up)
//			A[i] = up;
//		else
//			A[i] = down;
//	}
//}

void upDown(char *p){
	while(*p != '\0'){
		if(islower(*p))
		  *p = toupper(*p);
 		else
		  *p = tolower(*p);
 	  	p ++;  
	}
}

int main(){
	char A[] = "ab&&CD";
	upDown(A);
	cout << A;
}


