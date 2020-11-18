#include"mystring.h"
#include<string>

mystring::mystring(const char* str)
	:mSize(strlen(str)+1)
{
	mString = new char[mSize];
	memcpy(mString, str, mSize);
}

mystring::mystring(const mystring& other)
	:mSize(other.mSize)
{
	mString = new char[mSize];
	memcpy(mString, other.mString, mSize);
}

mystring::mystring(mystring&& other)
	:mString(other.mString)
	,mSize(other.mSize)
{
	other.mString = nullptr;
	other.mSize = 0;
}

mystring::~mystring()
{
	delete[] mString;
}

mystring& mystring::operator=(mystring&& other)
{
	if (this != &other)
	{
		delete[] mString;

		mString = other.mString;
		mSize = other.mSize;

		other.mString = nullptr;
		other.mSize = 0;
	}

	return *this;
}

const char* mystring::getString() const
{
	return mString;
}

int mystring::getSize() const
{
	return mSize;
}