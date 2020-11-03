#pragma once
#include<string>

using namespace std;

class studentinfo
{
public:
	studentinfo(const string& name, const string& studentID);
	const string& getName() const;
	const string& getStudentID() const;
	bool operator<(const studentinfo& rhs) const;
private:
	string mName;
	string mStudentID;
};