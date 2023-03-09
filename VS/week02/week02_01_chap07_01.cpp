#include <iostream>
using namespace std;

class Circle
{
private:
    double radius; // 필드, 맴버변수, 데이터맴버, 속성
public:
    Circle(); // constructer 기본 생성자
    Circle(double value);
    ~Circle(); // 소멸자
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
};
Circle::~Circle()
{
    cout << this << "===객체 소멸===\n";
}
Circle::Circle() : radius(1.0)
{
    cout << this << "객체 생성, 기본생성자 \n";
}
Circle::Circle(double value) : radius(value)
{
    cout << this << "객체 생성, 인스턴스가 있는생성자 \n";
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

// 멤버 함수가 아닌 일반 함수
void test()
{
    cout << "Circle 4" << endl;
    Circle circle4;
    circle4.setRadius(100.0);
    cout << "반지름: " << circle4.getRadius() << endl;
}

int main()
{
    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
    cout << "Circle 1" << endl;
    Circle circle1;
    
    test();

    circle1.setRadius(10.0);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;
    // 두 번째 circle 객체를 만들고 멤버 함수 호출  

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << endl << endl;

    cout << "Circle 3" << endl;
    Circle circle3;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << endl << endl;
    return 0;
}