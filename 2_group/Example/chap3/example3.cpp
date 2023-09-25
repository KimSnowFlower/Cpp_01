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
	cout << "반지름 " << radius << " 원 생성" << endl;
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
	cout << "donut radius는 " << donut.getRadius() << "이며 면적은 " << donut.getArea() << "입니다" << endl;

	Circle pizza(30);
	cout << "pizza radius는 " << pizza.getRadius() << "이며 면적은 " << pizza.getArea() << "입니다" << endl;

	pizza.setRadius(25);
	cout << "pizza radius는 " << pizza.getRadius() << "이며 면적은 " << pizza.getArea() << "입니다" << endl;

	return 0;
}