﻿/**************************************************************
 * Tokenizer 클래스의 인터페이스 파일                         *
 **************************************************************/
#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <iostream>
#include <string>
using namespace std;

class Tokenizer
{
  private: 
    string target;  
    string delim;
    int begin;
    int end;
  public:
    Tokenizer(const string& target, const string& delim);
    ~Tokenizer(); 
    bool moreToken() const;
    string nextToken();
};
#endif