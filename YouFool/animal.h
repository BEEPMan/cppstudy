#pragma once
#include<iostream>

using namespace std;

class Animal
{
public:
	Animal();
	Animal(int age);
	virtual ~Animal();
	virtual void Move();
	void Speak();
private:
	int mAge;
};