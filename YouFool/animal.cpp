#include "animal.h"

Animal::Animal(int age)
	:mAge(age)
{}

Animal::~Animal()
{}

void Animal::Speak()
{
	cout << "Animal speaking..." << endl;
}

void Animal::Move()
{
	cout << "Animal moving..." << endl;
}