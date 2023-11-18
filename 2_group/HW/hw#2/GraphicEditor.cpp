#include"GraphicEditor.h"
#include<iostream>
#include"Circle.h"
#include"Line.h"
#include"Rect.h"
#include"UI.h"
using namespace std;

void GraphicEditor::start() {
	cout << "�׷��� �������Դϴ�." << endl;

	while (1) {
		switch (UI::showMenu())
		{
		case 1:
			addList(UI::addShape());
			break;
		case 2:
			removeList(UI::removeShape());
			break;
		case 3:
			printList();
			break;
		case 4:
			exit(0);
		default:
			break;
		}
	}
}

void GraphicEditor::addList(int num) {
	switch (num) {
	case 1:
		if (pStart == NULL) {
			pStart = new Line();
			pLast = pStart;
		}
		else {
			pLast = pLast->add(new Line());
		}
		break;
	case 2:
		if (pStart == NULL) {
			pStart = new Circle();
			pLast = pStart;
		}
		else {
			pLast = pLast->add(new Circle());
		}
		break;
	case 3:
		if (pStart == NULL) {
			pStart = new Rect();
			pLast = pStart;
		}
		else {
			pLast = pLast->add(new Rect());
		}
		break;
	default:
		cout << "�޴��� �߸� �����ϼ̽��ϴ�" << endl;
		break;
	}

	listSize++;
}

void GraphicEditor::removeList(int num) {
	Shape* targetNode = pStart;
	Shape* prevNode = NULL;

	if (targetNode == NULL) {
		cout << "������ �����Ͱ� �����ϴ�" << endl;
	}

	if (num <= listSize && num > -1) {
		for (int i = 0; i < num; i++) {
			prevNode = targetNode;
			targetNode = targetNode->getNext();
		}

		if (num == 0) 
			pStart = prevNode->getNext();
		else
			prevNode->setNext(targetNode);

		listSize--;

		if (listSize == 1)
			pLast = pStart;
		delete targetNode;
	}
	else {
		cout << "�ε����� �߸� �Է��ϼ̽��ϴ�" << endl;
	}
}

void GraphicEditor::printList() {
	int listNum = 0;
	Shape* p = pStart;

	if (p == NULL) {
		cout << "����Ʈ�� �����ϴ�." << endl;
	}
	
	while (p != NULL) {
		cout << listNum << ": ";
		p->paint();
		p = p->getNext();
		listNum++;
	}
}