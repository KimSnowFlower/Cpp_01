#include<iostream>
#include "UI.h"
using namespace std;

int UI::showMenu() {
	int inputNum;
	cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
	cin >> inputNum;

	return inputNum;
}

int UI::addShape() {
	int inputNum;
	cout << "��:1, ��:2, �簢��:3 >>";
	cin >> inputNum;

	return inputNum;
}

int UI::removeShape() {
	int inputNum;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
	cin >> inputNum;

	return inputNum;
}