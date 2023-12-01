#ifndef WATER_H
#define WATER_H
#include"Material.h"

class Water : public Material
{
public:
	Water() {
		matName = "Water";
		amount = 3;
	}
};
#endif WATER_H