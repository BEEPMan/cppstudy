#pragma once
#include<iostream>

using namespace std;

class Vector
{
	friend inline ostream& operator<<(ostream& os, const Vector& rhs);
	friend inline Vector operator*(int multiplier, const Vector& rhs);
public:
	Vector();
	Vector(int x, int y);
	Vector(const Vector& other);
	inline int getX() const;
	inline void setX(int x);
	inline int getY() const;
	inline void setY(int y);
	inline Vector operator+(const Vector& rhs) const;
	inline Vector operator*(int multiplier) const;
	inline Vector& operator*=(int multiplier);
	inline Vector& operator+=(const Vector& rhs);
	inline bool operator==(const Vector& rhs) const;
private:
	int mX;
	int mY;
};

ostream& operator<<(ostream& os, const Vector& rhs);
Vector operator*(int multiplier, const Vector& rhs);

int Vector::getX() const
{
	return mX;
}

void Vector::setX(int x)
{
	mX = x;
}

int Vector::getY() const
{
	return mY;
}

void Vector::setY(int y)
{
	mY = y;
}

Vector Vector::operator+(const Vector& rhs) const
{
	Vector sum(mX + rhs.mX, mY + rhs.mY);

	return sum;
}

Vector Vector::operator*(int multiplier) const
{
	Vector mul(mX * multiplier, mY * multiplier);

	return mul;
}

Vector& Vector::operator*=(int multiplier)
{
	mX *= multiplier;
	mY *= multiplier;
	return *this;
}

Vector& Vector::operator+=(const Vector& rhs)
{
	mX += rhs.mX;
	mY += rhs.mY;
	return *this;
}

bool Vector::operator==(const Vector& rhs) const
{
	return (mX == rhs.mX && mY == rhs.mY);
}

ostream& operator<<(ostream& os, const Vector& rhs)
{
	os << "(" << rhs.mX << ", " << rhs.mY << ")";
	return os;
}

Vector operator*(int multiplier, const Vector& rhs)
{
	Vector mul(multiplier * rhs.mX, multiplier * rhs.mY);

	return mul;
}