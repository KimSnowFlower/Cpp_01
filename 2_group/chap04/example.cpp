#include<iostream>
#include"Circle.h"
using namespace std;

int main() {
	Circle circleArr[3];

	for (int i = 0; i < 3; i++) {
		circleArr[i].setRadius(10 * (i + 1));
		cout << "Circle " << i << "의 면적은 " << circleArr[i].getArea() << endl;
	}

	Circle* p;
	p = circleArr;

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}

	return 0;
}