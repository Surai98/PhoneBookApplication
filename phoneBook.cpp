#include <string>
#include <iostream>
#include <vector>
#include "phoneBook.h"

phoneBook::phoneBook(): phoneVector(0)
{
}

//will search for a phone record given the name
//returns true or false depending on whether the project exists
bool phoneBook::find(std::string name){
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == name){
			return true;
		}
	}
	return false;
}

//will add a contact to the phonebook
//the contact involves the  name, email and phone number
void phoneBook::insert(const std::string &name, const std::string &number, const std::string &email)
{
	bool a = true;
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == name){
			phoneVector[i].email(email);
			phoneVector[i].phoneNumber(number);
			a = false;
		}
	}
	if(a){
		phoneVector.push_back(phoneBookEntry(name, number, email));
	}
}

//will delete a contact record from the phone book given the string name:
bool phoneBook::deleteContact(std::string name) {
    for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == name){
			phoneVector.erase(phoneVector.begin() + i);
			return true;
		}
	}
	return false;
}

void phoneBook::print(std::ostream &out) const{
	out << "Name:                          Phone Number:   E-Mail:" << std::endl;
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		out << phoneVector[i].name();
		for(std::size_t h = 31; h > phoneVector[i].name().size(); h--){
			out <<" ";
		}
		out << phoneVector[i].phoneNumber();
		for(std::size_t j = 16; j > phoneVector[i].phoneNumber().size(); j--){
			out <<" ";
		}
		out << phoneVector[i].email() << std::endl;
	}
}

//returns array size
std::size_t phoneBook::size() const{
	return phoneVector.size();
}
//starts
phoneBook::iterator phoneBook::begin()
{
	return phoneVector.begin();
}
//ends
phoneBook::iterator phoneBook::end()
{
	return phoneVector.end();
}




