#ifndef CUP_H
#define CUP_H
#include"Material.h"
using namespace std;
class Cup : public Material
{
public:
	Cup() {
		matName = "Cup";
		amount = 3;
	}
};
#endif CUP_H