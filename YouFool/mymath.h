#pragma once
#include<cmath>

class mymath
{
public:
	static int ceil(float value);
	static int floor(float value);
	static float power(float value, float pow);
	static int round(float value);
	static float square(float value);
private:
	mymath() {};
};