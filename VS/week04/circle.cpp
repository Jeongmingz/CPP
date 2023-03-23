#include "circle.h"

int Circle::count = 0; // 정적변수 초기화 init

Circle::Circle() : radius(1.0) // 초기화 리스트
{
    // radius == 1.0
    cout << this << "객체 생성, 기본생성자 \n";
    count++;
}
Circle::Circle(double value) : radius(value)
{
    cout << this << "객체 생성, 인스턴스가 있는생성자 \n";
    count++;
}
//Circle::Circle(const Circle& circle) : radius(circle.radius)
//{
//    // 일반함수 내에서 복사생성자를 사용 하려면 일반함수에서 선언된 객체를 복사하고,
//    // 메인함수 내에서 사용하려면 메인함수에서 선언된 객체를 복사 해야한다.
//    //this->radius = circle.radius; // radius = circle.radius
//    cout << this << "객체 생성, 복사 생성자 \n";
//    count++;
//}
Circle::~Circle()
{
    cout << this << "===객체 소멸===\n";
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
