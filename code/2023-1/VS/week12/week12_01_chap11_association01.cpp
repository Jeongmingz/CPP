/**************************************************************
 * Invoice 클래스를 사용하는 애플리케이션 파일                *
 **************************************************************/
#include "invoice.h"

int main()
{
	// Product 객체 인스턴스화
	//Company company1("이케아 주식회사"); // Aggregation

	// Product 객체 인스턴스화
	Product product1("책상", 150.00);
	Product product2("의자", 80.00);
	Product product3("쇼파", 500.00);

	// Invoice 객체를 인스턴스화하고 Product 객체를 사용해 출력
	//Invoice invoice(1001, company1); // Aggregation
	Invoice invoice(1001, "이케아 주식회사"); // Composition
	invoice.add(1, product1);
	invoice.add(6, product2);
	invoice.add(1, product3);
	invoice.print();
	return 0;
}