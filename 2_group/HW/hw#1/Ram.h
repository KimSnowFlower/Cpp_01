#ifndef RAM_H
#define RAM_H

#pragma once
class Ram {
private:
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int adress);
	void write(int adress, char value);
};
#endif