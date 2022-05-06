/*
*      Author: https://github.com/trentshaines
*/

#ifndef PRINTCOMMAND_H_
#define PRINTCOMMAND_H_
#include "bookCommand.h"
//will help with printing out the phonebook records
class printCommand: public bookCommand
{
	private:
		phoneBook &book;
	public:
		void execute();
		printCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream);
};
#endif /*PRINTCOMMAND_H_*/
