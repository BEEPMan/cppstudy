#pragma once
#include "animal.h"
#include <string.h>

class Cat : public Animal
{
public:
	Cat();
	Cat(int age, const char* name);
	virtual ~Cat();
	void Move();
	void Speak();
	char* getName() const;
	static int mCatCount;
private:
	char* mName;
};