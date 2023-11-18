#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
private:
	Shape* nextShape;
protected:
	virtual void draw() = 0;
public:
	Shape() { nextShape = nullptr; }
	virtual ~Shape() {}
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return nextShape; }
	void setNext(Shape* p);
};
#endif SHAPE_H