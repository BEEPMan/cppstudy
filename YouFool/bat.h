#pragma once
#include"iwalkable.h"
#include"iflyable.h"

class Bat : public IWalkable, public IFlyable
{
public:
	void Walk() const;
	void Fly() const;
private:

};