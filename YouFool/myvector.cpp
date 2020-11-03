#include"myvector.h"

Vector::Vector(int x, int y) 
	:	mX(x)
	,	mY(y)
{}

Vector::Vector(const Vector& other)
	:	mX(other.mX)
	,	mY(other.mY)
{}