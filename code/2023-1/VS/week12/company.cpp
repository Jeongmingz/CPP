#include "company.h"

Company::Company(string name)
	: name(name)
{
	//this->name = name;
}

void Company::print() const
{
	cout << name << "\n\n";
}
