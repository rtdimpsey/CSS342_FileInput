#include "stdafx.h"
#include "TestObject.h"


TestObject::TestObject() : val1(0), val2(0)
{
}


TestObject::~TestObject()
{
}

istream& operator>>(istream &inStream, TestObject &to)
{
	inStream >> to.s1 >> to.s2 >> to.val1 >> to.val2;
	return inStream;
}

ostream& operator<<(ostream &outStream, const TestObject &to)
{
	outStream << to.s1 << " : " << to.s2 << " : " << to.val1 << " : " << " : " << to.val2;
	return outStream;
}
