/**************************************************************
 * Invoice 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"
#include "company.h"

class Invoice
{
  private:
    int invoiceNumber;
    double invoiceTotal; 
    Company company; // has - a (Aggregation, Composition)
  public: 
    //Invoice(int invoiceNumber, Company company); // has - a (Aggregation)
    Invoice(int invoiceNumber, string companyname); // has - a (Composition)
    ~Invoice(); 
    void add(int quantity, Product product);
    void print() const; 
};
#endif