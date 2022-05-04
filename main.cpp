/* Celine Ogero
 * portfolio_project
 * CSCE 306: Object oriented programming in c++;
 * Telephone Application.
 * Code Summary: This source code file is for the portfolio assignment
 *
 */

#include <iostream>
#include <string>
#include "menuList.h"
#include "phoneBook.h"
#include "addUpdateCommand.h"
#include "printCommand.h"
#include "eraseCommand.h"

int main()
{

	phoneBook pbook;
	// create the commands to use on the phone book
	addUpdateCommand addUpdate(pbook, std::cin, std::cout);
	printCommand printComm(pbook, std::cin, std::cout);
	eraseCommand eraseComm(pbook, std::cin, std::cout);

	// build the menuList and menuItems
	menuList menu("Phone book menu:");
	// these are the actual menu entries for the application
	menuItem addItem('1', "add/update: ", addUpdate);
	menuItem eraseItem('2', "delete: ", eraseComm);
	menuItem printItem('3', "view  contacts: ", printComm);


	// add the menuItem values to the menulist
	menu.add(addItem);
	menu.add(eraseItem);
	menu.add(printItem);


	std::cout << "Starting the Phone Book Application: \n" << std::endl;


	// run the menu
	menu.start();
    std::cout << "Thank you for using the Phone Book Application: \n" << std::endl;
	return 0;
}

