#include"Material.h"
#include<iostream>

std::string Material::getName() {
	return this->matName;
}

int Material::getAmount() {
	return this->amount;
}

void Material::setAmount(int amount) {
	this->amount = amount;
}

bool Material::subAmount(int amount) {
	if (this->amount <= 0)
		return false;
	else
		this->amount -= amount;
	return true;
}