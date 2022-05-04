#include "eraseCommand.h"
eraseCommand::eraseCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream)
  :  bookCommand(inStream, outStream), book(bookIn)
{
}
void eraseCommand::execute(){

	std::string name;
	name= input("Enter the name you want to delete");
	if(book.find(name)){
		book.erase(name);
		disp("Phone book entry " + name + " was deleted");
	}
	else{
		disp("Phone book entry " + name + " was not found and hence not deleted");
	}
}

