#pragma once
#ifndef ADD_H
#define ADD_H

#include <iostream>
using namespace std;

class Add { // ���� ��� Ŭ����
	int op1, op2;
public:
	Add(int a, int b);
	int process();
};

#endif