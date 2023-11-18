#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
#include"Shape.h"
class GraphicEditor
{
private:
	Shape* pStart;
	Shape* pLast;
	int listSize;
public:
	GraphicEditor() {
		pStart = nullptr;
		pLast = nullptr;
		listSize = 0;
	}
	
	void start(); // UI 클래스를 부를 함수
	void addList(int num);
	void removeList(int num);
	void printList();
};
#endif GRAPHICEDITOR_H