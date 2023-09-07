/**************************************************************
 * Invoice Ŭ������ ����ϴ� ���ø����̼� ����                *
 **************************************************************/
#include "invoice.h"

int main()
{
	// Product ��ü �ν��Ͻ�ȭ
	//Company company1("���ɾ� �ֽ�ȸ��"); // Aggregation

	// Product ��ü �ν��Ͻ�ȭ
	Product product1("å��", 150.00);
	Product product2("����", 80.00);
	Product product3("����", 500.00);

	// Invoice ��ü�� �ν��Ͻ�ȭ�ϰ� Product ��ü�� ����� ���
	//Invoice invoice(1001, company1); // Aggregation
	Invoice invoice(1001, "���ɾ� �ֽ�ȸ��"); // Composition
	invoice.add(1, product1);
	invoice.add(6, product2);
	invoice.add(1, product3);
	invoice.print();
	return 0;
}