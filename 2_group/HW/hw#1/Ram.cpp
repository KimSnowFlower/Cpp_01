#include<iostream>
#include "Ram.h"

using namespace std;

Ram::Ram() {
	size = 100 * 1024;
	mem[size] = { 0 };
}

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int adress) {
	return mem[adress];
}

void Ram::write(int adress, char value) {
	mem[adress] = value;
}