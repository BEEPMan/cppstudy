#include "cat.h"

Cat::Cat() 
{
	mCatCount++;
}

Cat::Cat(int age, const char* name)
	:Animal(age)
{
	size_t size = strlen(name) + 1;
	mName = new char[size];
	strcpy(mName, name);
	mCatCount++;
}

Cat::~Cat()
{
	mCatCount--;
	delete mName;
}

void Cat::Speak()
{
	cout << mName << " says \"Meow\"" << endl;
}

void Cat::Move()
{
	cout << mName << " moving" << endl;
}

char* Cat::getName() const
{
	return mName;
}

int Cat::mCatCount = 0;