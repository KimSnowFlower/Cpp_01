#include "Calculator.h"
#include "Add.h"

using namespace std;

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; // ���� �� �� �Է�
	Add adder(a, b); // ������ ����
	cout << adder.process(); // ���� ���
}