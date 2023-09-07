/**************************************************************
 * Invoice 클래스의 구현 파일                                 *
 **************************************************************/
#include "invoice.h"

// 생성자
//Invoice::Invoice(int invoiceNumber, Company company)
Invoice::Invoice(int invoiceNumber, string companyname)
//: invoiceNumber(invoiceNumber), invoiceTotal(0.0), company(company)
: invoiceNumber(invoiceNumber), invoiceTotal(0.0), company(companyname)
{  
}
// 소멸자
Invoice::~Invoice() 
{
}
// add 멤버 함수
void Invoice::add(int quantity, Product product)
{
  invoiceTotal += quantity * product.getPrice();
}
// print 멤버 함수
void Invoice::print() const
{
   company.print();
   cout << "청구 번호: " << invoiceNumber << endl;
   cout << "청구 금액: " << invoiceTotal << endl;
}