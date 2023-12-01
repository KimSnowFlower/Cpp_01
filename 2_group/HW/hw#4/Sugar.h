#ifndef SUGAR_H
#define SUGRA_H
#include"Material.h"
using namespace std;
class Sugar : public Material
{
public:
	Sugar() {
		matName = "Sugar";
		amount = 3;
	}
};
#endif SUGAR_H