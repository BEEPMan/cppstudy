#include"dog.h"
#include <string.h>

Dog::Dog(int age, const char* address)
	:Animal(age)
{
	size_t size = strlen(address) + 1;
	mAddress = new char[size];
	strcpy(mAddress, address);
}

char* Dog::getAddress() const
{
	return mAddress;
}