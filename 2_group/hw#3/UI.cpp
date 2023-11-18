#include<iostream>
#include "UI.h"
using namespace std;

int UI::showMenu() {
	int inputNum;
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
	cin >> inputNum;

	return inputNum;
}

int UI::addShape() {
	int inputNum;
	cout << "선:1, 원:2, 사각형:3 >>";
	cin >> inputNum;

	return inputNum;
}

int UI::removeShape() {
	int inputNum;
	cout << "삭제하고자 하는 도형의 인덱스 >>";
	cin >> inputNum;

	return inputNum;
}