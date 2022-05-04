//Celine Ogero
//phoneBookEntry.cpp

#include <string>
#include <iostream>
#include "phoneBookEntry.h"
phoneBookEntry::phoneBookEntry(): username(""), usernumber(""), useremail("")
{
}
phoneBookEntry::phoneBookEntry(const std::string &name, const std::string &number): username(name), usernumber(number), useremail("")
{
}
phoneBookEntry::phoneBookEntry(const std::string &name, const std::string &number, const std::string &email): username(name), usernumber(number), useremail(email)
{
}
//entry containing a username, a phone number and an email;
phoneBookEntry::phoneBookEntry(const phoneBookEntry &from)
	{
		username = from.username;
		usernumber = from.usernumber;
		useremail = from.useremail;
	}

 //returns username
std::string phoneBookEntry::name() const{
	return username;
}
//return user phone number
std::string phoneBookEntry::phoneNumber() const{
	return usernumber;
}
//returns the email
std::string phoneBookEntry::email() const{
	return useremail;
}
//sets the phone number
void phoneBookEntry::phoneNumber(const std::string &newNumber){
	usernumber = newNumber;
}
//sets the email
void phoneBookEntry::email(const std::string &newEmail){
	useremail = newEmail;
}


