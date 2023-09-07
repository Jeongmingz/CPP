<<<<<<< HEAD:VS/week11/person.cpp
#include "person.h"


Person::Person(){
    : identity(0), name("nameless")
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

void Person::print() const
{
    cout << name << '\n';
}
=======
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

void Person::print() const
{
    cout << name << '\n';
}
>>>>>>> b8aaa4f32a7bae8d0e319ec7f174fb9c553fa518:code/2023-1/VS/week11/person.cpp
