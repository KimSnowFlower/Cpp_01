#ifndef MATERIAL_H
#define MATERIAL_H

#include<iostream>
#include<string>

class Material
{
protected:
    std::string matName;
    int amount;

public:
    Material() {
        matName = "";
        amount = 0;
    }

    std::string getName();
    int getAmount();
    void setAmount(int amount);
    bool subAmount(int amount);
};

#endif