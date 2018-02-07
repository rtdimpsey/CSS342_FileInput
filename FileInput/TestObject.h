#pragma once
// Object to show reading from a file function
#include <string>
using namespace std;

class TestObject
{
	friend istream& operator>>(istream &inStream, TestObject &to);
	friend ostream& operator<<(ostream &outStream, const TestObject &to);

public:
	TestObject();
	~TestObject();

private:
	string s1;
	string s2;
	int val1;
	int val2;
};

