#pragma once
#include<string>
#include<iostream>

using namespace std;

class score
{
public:
	score(int score, string className);
	int GetScore() const;
	void SetScore(int score);
	string GetClassName() const;
	void PrintVariables() const;
private:
	int mScore;
	string mClassName;
};