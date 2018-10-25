# include <string>
using std::string;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestory{
	public:
		CreateAndDestory(int, string);
		~CreateAndDestory();
	private:
		int objectID;
		string message;
		
};

#endif
