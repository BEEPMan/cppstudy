#pragma once

class mystring
{
public:
	mystring(const char* str);
	mystring(const mystring& other);
	mystring(mystring&& other);
	virtual ~mystring();

	mystring& operator=(mystring&& other);
	const char* getString() const;
	int getSize() const;
private:
	char* mString;
	int mSize;
};