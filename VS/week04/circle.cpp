#include "circle.h"

int Circle::count = 0; // �������� �ʱ�ȭ init

Circle::Circle() : radius(1.0) // �ʱ�ȭ ����Ʈ
{
    // radius == 1.0
    cout << this << "��ü ����, �⺻������ \n";
    count++;
}
Circle::Circle(double value) : radius(value)
{
    cout << this << "��ü ����, �ν��Ͻ��� �ִ»����� \n";
    count++;
}
//Circle::Circle(const Circle& circle) : radius(circle.radius)
//{
//    // �Ϲ��Լ� ������ ��������ڸ� ��� �Ϸ��� �Ϲ��Լ����� ����� ��ü�� �����ϰ�,
//    // �����Լ� ������ ����Ϸ��� �����Լ����� ����� ��ü�� ���� �ؾ��Ѵ�.
//    //this->radius = circle.radius; // radius = circle.radius
//    cout << this << "��ü ����, ���� ������ \n";
//    count++;
//}
Circle::~Circle()
{
    cout << this << "===��ü �Ҹ�===\n";
    count--;
}


double Circle::getRadius() const
{
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
void Circle::setRadius(double value)
{
    radius = value;
}
int Circle::getCount() // static
{
    return count;
}
