#pragma once
#include <iostream>
#include <string>

using namespace std;
/**************************************************************
 * Person 클래스의 정의                                       *
 **************************************************************/
class Person
{
private:
    long identity;
    string name;
public:
    Person();
    Person(long identity, string name);
    void setId(long identity);
    long getId() const;
    void setname(string name);
    string getname() const;
    void print() const;
};