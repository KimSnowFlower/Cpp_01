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
	cout << "donut radius는 " << donut.getRadius() << "이며 면적은 " << donut.getArea() << "입니다" << endl;

	Circle pizza;
	pizza.setRadius(30);
	cout << "pizza radius는 " << pizza.getRadius() << "이며 면적은 " << pizza.getArea() << "입니다" << endl;
	
	return 0;
}