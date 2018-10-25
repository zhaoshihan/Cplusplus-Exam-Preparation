# include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strlen;
using std::strcpy;

# include "static_data_member.h"
/*
  static data member: Such a variable represents "class-wide" information
  static member function: Static member functions are not associated with any object. When called, they have no this pointer and cannot be virtual, const, or volatile
  static 
*/
int Employee::count = 0;
int Employee::getCount(){
	return count;
} 
void Employee::memberfoo(){
	cout << "### This is a static member function ###" << endl;
}
Employee::Employee(const char* const first, const char* const last){
	firstName = new char[ strlen(first) + 1];
	strcpy(firstName, first);
	lastName = new char[ strlen(last) + 1];
	strcpy(lastName, last);
	
	count ++;
	cout << "Employee constructor for " << firstName << ' ' << lastName << " called." << endl;
}
Employee::~Employee(){
	cout << "~Employee() called for " << firstName << ' ' << lastName << endl;
	delete [] firstName;
	delete [] lastName;
	
	count --;
}
const char* Employee::getFirstName() const{
	// const before return type prevents client from modifying
	return firstName;
}
const char* Employee::getLastName() const{
	return lastName;
}

int main(){
	cout << "Number of employees before instantiation of any objects is " << Employee::getCount() << endl;
	Employee *e1Ptr = new Employee("Susan", "Baker");
	Employee::memberfoo();  //²âÊÔstatic member function 
	Employee *e2Ptr = new Employee("Robert", "Jones");
	
	cout << "Number of employees after objects are instantiated is " << e1Ptr->getCount();
	cout << "\n\nEmployee 1: " << e1Ptr->getFirstName() << " " << e1Ptr->getLastName() << "\nEmployee 2: " << e2Ptr->getFirstName() << " " << e2Ptr->getLastName() << "\n\n";
	
	delete e1Ptr;
	delete e2Ptr;
	
	cout << "Number of employees after objects are deleted is " << Employee::getCount() << endl;
	return 0;		
}
