//#include <iostream>
//using namespace std;
//
//class Circle
//{
//private:
//    double radius; // �ʵ�, �ɹ�����, �����͸ɹ�, �Ӽ�
//    static int count; // �������� (Ŭ���� ����)
//public:
//    Circle(); // constructer �⺻ ������
//    Circle(double value); // �Ű����� ������
//    //Circle(const Circle& circle); // ��������� copy constructer
//    Circle(const Circle& circle) = delete; // ���������Ͱ� ���������� ��������ڸ� ����°� �����ϰ� ���ش�.
//
//    ~Circle(); // �Ҹ���
//
//    // const��
//    // field, member������ side effect�� �߻����� �ʴ´�.
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//    static int getCount();
//};
//
//int Circle::count = 0; // �������� �ʱ�ȭ init
//Circle::Circle() : radius(1.0) // �ʱ�ȭ ����Ʈ
//{
//    // radius == 1.0
//    cout << this << "��ü ����, �⺻������ \n";
//    count++;
//}
//Circle::Circle(double value) : radius(value)
//{
//    cout << this << "��ü ����, �ν��Ͻ��� �ִ»����� \n";
//    count++;
//}
////Circle::Circle(const Circle& circle) : radius(circle.radius)
////{
////    // �Ϲ��Լ� ������ ��������ڸ� ��� �Ϸ��� �Ϲ��Լ����� ����� ��ü�� �����ϰ�,
////    // �����Լ� ������ ����Ϸ��� �����Լ����� ����� ��ü�� ���� �ؾ��Ѵ�.
////    //this->radius = circle.radius; // radius = circle.radius
////    cout << this << "��ü ����, ���� ������ \n";
////    count++;
////}
//Circle::~Circle()
//{
//    cout << this << "===��ü �Ҹ�===\n";
//    count--;
//}
//
//
//double Circle::getRadius() const
//{
//    return radius;
//}
//double Circle::getArea() const
//{
//    const double PI = 3.14;
//    return (PI * radius * radius);
//}
//double Circle::getPerimeter() const
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//void Circle::setRadius(double value)
//{
//    radius = value;
//}
//int Circle::getCount() // static
//{
//    return count;
//}
//
//// ��� �Լ��� �ƴ� �Ϲ� �Լ�
//void test()
//{
//    Circle circle5;
//    circle5.setRadius(5.0);
//
//
//    Circle circle4;
//    circle4.setRadius(100.0);
//
//    Circle circle6(circle5.getRadius());
//
//    cout << Circle::getCount() << endl;
//}
//
//int main()
//{
//    cout << Circle::getCount() << endl;
//
//    // ù ��° circle ��ü�� ����� ��� �Լ� ȣ��
//    Circle circle1;
//
//    cout << Circle::getCount() << endl;
//
//    test();
//
//    cout << Circle::getCount() << endl;
//
//    circle1.setRadius(10.0);
//    // �� ��° circle ��ü�� ����� ��� �Լ� ȣ��  
//
//    Circle circle2;
//    circle2.setRadius(20.0);
//
//    Circle circle3;
//    circle2.setRadius(20.0);
//
//    {
//        Circle circle7;
//
//    }
//    cout << Circle::getCount() << endl;
//    return 0;
//}