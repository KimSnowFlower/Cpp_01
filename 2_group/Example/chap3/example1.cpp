#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	void setRadius(int _radius);
	int getRadius();
	double getArea();
};

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
	donut.setRadius(1);
	cout << "donut radius�� " << donut.getRadius() << "�̸� ������ " << donut.getArea() << "�Դϴ�" << endl;

	Circle pizza;
	pizza.setRadius(30);
	cout << "pizza radius�� " << pizza.getRadius() << "�̸� ������ " << pizza.getArea() << "�Դϴ�" << endl;
	
	return 0;
}