#include"mymath.h"

int mymath::ceil(float value)
{
	int intvalue = static_cast<int>(value);
	if (value == static_cast<float>(intvalue)) return intvalue;
	return intvalue + 1;
}

int mymath::floor(float value)
{
	return static_cast<int>(value);
}

float mymath::power(float value, float power)
{
	return pow(value, power);
}

int mymath::round(float value)
{
	return static_cast<int>(value + 0.5f);
}

float mymath::square(float value)
{
	return value * value;
}