#include"score.h"

score::score(int score, string className)
	:mScore(score)
	,mClassName(className)
{}

int score::GetScore() const
{
	return mScore;
}

void score::SetScore(int score)
{
	mScore = score;
}

string score::GetClassName() const
{
	return mClassName;
}

void score::PrintVariables() const
{
	cout << mClassName << ": " << mScore << endl;
}