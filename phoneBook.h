#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_
#include <iostream>
#include <string>
#include <vector>
#include "phoneBookEntry.h"


typedef std::vector<phoneBookEntry> phoneBookEntryList;
typedef phoneBookEntryList::iterator iterator;
typedef phoneBookEntryList::const_iterator const_iterator;


class phoneBook{
	private:
		typedef std::vector<phoneBookEntry> phoneBookEntryList;
		phoneBookEntryList phoneVector;
		typedef phoneBookEntryList::iterator iterator;
		typedef phoneBookEntryList::const_iterator const_iterator;
	public:

		bool find(std::string name);
		phoneBook();

    void insert(const std::string &name, const std::string &number, const std::string &email);

    bool deleteContact(std::string name);

    void print(std::ostream &out) const;

    std::size_t size() const;
		iterator begin();
		iterator end();


};
#endif /*PHONEBOOK_H_*/

