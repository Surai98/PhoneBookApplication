/*
*      Author: https://github.com/trentshaines
*/
#ifndef ERASECOMMAND_H_
#define ERASECOMMAND_H_
#include "bookCommand.h"
//will enable deletion of a contact record;
class eraseCommand: public bookCommand
{
	private:
		phoneBook &book;
	public:
		void execute();
		eraseCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream);
};
#endif /*ERASECOMMAND_H_*/
