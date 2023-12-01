#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include <iostream>
#include "Material.h"
using namespace std;

class CoffeeMachine
{
private:
	Material* mat[5];
public:
	CoffeeMachine();

	void showCoffeeMachineState();
	void start();
	void showMenu();
	int selectMenu();
};
#endif COFFEEMACHINE_H