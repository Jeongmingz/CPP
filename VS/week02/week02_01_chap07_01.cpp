#include <iostream>
using namespace std;

class Circle
{
private:
    double radius; // �ʵ�, �ɹ�����, �����͸ɹ�, �Ӽ�
public:
    Circle(); // constructer �⺻ ������
    Circle(double value);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
};

Circle::Circle() 
{
    cout << "��ü ����, �⺻������ \n";
}
Circle::Circle(double value)
{
    cout << "��ü ����, �ν��Ͻ��� �ִ»����� \n";
    radius = value;
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

int main()
{
    // ù ��° circle ��ü�� ����� ��� �Լ� ȣ��
    cout << "Circle 1" << endl;
    Circle circle1;
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
    cout << "�ѷ�: " << circle2.getPerimeter();
    return 0;
}