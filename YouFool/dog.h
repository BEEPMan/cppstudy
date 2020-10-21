#pragma once
#include"animal.h"

class Dog : public Animal
{
public:
	Dog(int age, const char* address);
	char* getAddress() const;
private:
	int mAge;
	char* mAddress;
};