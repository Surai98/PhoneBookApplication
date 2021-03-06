#ifndef PHONEBOOKENTRY_H_
#define PHONEBOOKENTRY_H_
#include <iostream>
#include <string>
class phoneBookEntry{
	private:
    //a phonebook entry has a username, phone number and an email;
		std::string username;
		std::string usernumber;
		std::string useremail;
	public:
        //list the different types of entries that a user can get
		phoneBookEntry();
		phoneBookEntry(const std::string &name, const std::string &number);
		phoneBookEntry(const std::string &name, const std::string &number,  const std::string &email);
		phoneBookEntry(const phoneBookEntry &from);
		void phoneNumber(const std::string &newNumber);
		void email(const std::string &newEmail);
		std::string name() const;
		std::string phoneNumber() const;
		std::string email() const;
};

#endif /*PHONEBOOKENTRY_H_*/
