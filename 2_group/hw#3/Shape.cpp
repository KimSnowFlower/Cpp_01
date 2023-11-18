#include<iostream>
#include "Shape.h"
using namespace std;

void Shape::paint() {
	draw();
}

Shape* Shape::add(Shape* p) {
	this->nextShape = p;
	return p;
}

void Shape::setNext(Shape* p) {
	this->nextShape = p->nextShape;
}