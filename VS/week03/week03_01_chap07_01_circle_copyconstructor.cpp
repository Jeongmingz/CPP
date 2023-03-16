#include <iostream>
using namespace std;

class Circle
{
private:
    double radius; // �ʵ�, �ɹ�����, �����͸ɹ�, �Ӽ�
public:
    Circle(); // constructer �⺻ ������
    Circle(double value); // �Ű����� ������
    Circle(const Circle& circle); // ��������� copy constructer
    ~Circle(); // �Ҹ���

    // const��
    // field, member������ side effect �� �߻����� �ʴ´�.
    double getRadius() const; 
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
};
Circle::~Circle()
{
    cout << this << "===��ü �Ҹ�===\n";
}
Circle::Circle() : radius(1.0) // �ʱ�ȭ ����Ʈ
{
    // radius == 1.0
    cout << this << "��ü ����, �⺻������ \n";
}
Circle::Circle(double value) : radius(value)
{
    cout << this << "��ü ����, �ν��Ͻ��� �ִ»����� \n";
}
Circle::Circle(const Circle& circle) : radius(circle.radius)
{
    // �Ϲ��Լ� ������ ��������ڸ� ��� �Ϸ��� �Ϲ��Լ����� ����� ��ü�� �����ϰ�,
    // �����Լ� ������ ����Ϸ��� �����Լ����� ����� ��ü�� ���� �ؾ��Ѵ�.
    //this->radius = circle.radius; // radius = circle.radius
    cout << this << "��ü ����, ���� ������ \n";
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

// ��� �Լ��� �ƴ� �Ϲ� �Լ�
void test()
{
    cout << "Circle 5" << endl;
    Circle circle5;
    cout << "������: " << circle5.getRadius() << endl;


    cout << "Circle 4" << endl;
    Circle circle4;
    circle4.setRadius(100.0);
    cout << "������: " << circle4.getRadius() << endl;

    cout << "Circle 6" << endl;
    Circle circle6(circle5);
    cout << "������: " << circle6.getRadius() << endl;

}

int main()
{
    // ù ��° circle ��ü�� ����� ��� �Լ� ȣ��
    cout << "Circle 1" << endl;
    Circle circle1;

    test();

    circle1.setRadius(10.0);
    cout << "������: " << circle1.getRadius() << endl;
    cout << "����: " << circle1.getArea() << endl;
    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;
    // �� ��° circle ��ü�� ����� ��� �Լ� ȣ��  

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "������: " << circle2.getRadius() << endl;
    cout << "����: " << circle2.getArea() << endl;
    cout << "�ѷ�: " << circle2.getPerimeter() << endl << endl;

    cout << "Circle 3" << endl;
    Circle circle3;
    circle2.setRadius(20.0);
    cout << "������: " << circle2.getRadius() << endl;
    cout << "����: " << circle2.getArea() << endl;
    cout << "�ѷ�: " << circle2.getPerimeter() << endl << endl;
    return 0;
}