#pragma once
/**************************************************************
 * company 클래스의 인터페이스 파일                           *
 **************************************************************/
#include "product.h"

class Company
{
private:
    string name;
public:
    Company(string name);
    void print() const;
};
