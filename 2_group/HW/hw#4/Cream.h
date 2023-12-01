#ifndef CREAM_H
#define CREAM_H
#include"Material.h"
using namespace std;
class Cream : public Material
{
public:
	Cream() {
		matName = "Cream";
		amount = 3;
	}
};
#endif CREAM_H