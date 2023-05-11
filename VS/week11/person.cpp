#include "person.h"

Person::Person()
    : identity(0), name("nameless")
{
}

Person::Person(long identity, string name)
    : identity(identity), name(name)
{
}

void Person::setId(long identity)
{
    this->identity = identity;
}

long Person::getId() const
{
    return identity;
}

void Person::setname(string name)
{
    this->name = name;
}

string Person::getname() const
{
    return string();
}

void Person::print()
{
    cout << name << '\n';
}
