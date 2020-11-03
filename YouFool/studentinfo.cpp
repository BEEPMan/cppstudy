#include"studentinfo.h"

studentinfo::studentinfo(const string& name, const string& studentID)
	:mName(name)
	,mStudentID(studentID)
{}

const string& studentinfo::getName() const
{
	return mName;
}

const string& studentinfo::getStudentID() const
{
	return mStudentID;
}

bool studentinfo::operator<(const studentinfo& rhs) const
{
	if (mName == rhs.getName())
	{
		return mStudentID < rhs.getStudentID();
	}
	return mName < rhs.getName();
}