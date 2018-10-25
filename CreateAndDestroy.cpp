# include <iostream>
using std::cout;
using std::endl;

# include "CreateAndDestory.h"
CreateAndDestory::CreateAndDestory(int ID, string messageString){
	objectID = ID;
	message = messageString;
	
	cout << "Object" << objectID << "  constructor runs  "
	<< message << endl;
	
}
CreateAndDestory::~CreateAndDestory(){
	cout << "Object" << objectID << "  destructor runs   "
	<< message << endl;
	
}

void create(){
	cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
	CreateAndDestory fifth( 5, "(local automatic in create)" );    
    static CreateAndDestory sixth( 6, "(local static in create)" );
    CreateAndDestory seventh( 7, "(local automatic in create)" );  
}

CreateAndDestory first(1, "(global before main)");

int main(){
	cout << "\nMain FUNCTION: EXECUTION BEGINS" << endl;
	CreateAndDestory second(2, "(local automatic in main)");
	static CreateAndDestory third(3, "(local static in main)");
	
	create();
	cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
	CreateAndDestory fourth(4, "(local automatic in main)");
	
	cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
	return 0;
}
