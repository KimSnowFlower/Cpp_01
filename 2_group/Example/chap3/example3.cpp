#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int _radius);
	void setRadius(int _radius);
	int getRadius();
	double getArea();
};

Circle::Circle():Circle(1) {}

Circle::Circle(int _radius) {
	radius = _radius;
	cout << "������ " << radius << " �� ����" << endl;
}

void Circle::setRadius(int _radius) {
	radius = _radius;
}

int Circle::getRadius() {
	return radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	cout << "donut radius�� " << donut.getRadius() << "�̸� ������ " << donut.getArea() << "�Դϴ�" << endl;

	Circle pizza(30);
	cout << "pizza radius�� " << pizza.getRadius() << "�̸� ������ " << pizza.getArea() << "�Դϴ�" << endl;

	pizza.setRadius(25);
	cout << "pizza radius�� " << pizza.getRadius() << "�̸� ������ " << pizza.getArea() << "�Դϴ�" << endl;

	return 0;
}