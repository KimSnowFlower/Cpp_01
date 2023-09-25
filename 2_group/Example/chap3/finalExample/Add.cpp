#include "Add.h"

Add::Add(int a, int b) {
	op1 = a; op2 = b;
}
int Add::process() {
	return op1 + op2;
}