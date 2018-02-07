// FileInput.cpp : Defines the entry point for the console application.
// Simple templated function will read in objects from file
// NOTE: that the file is assumed to be well-formatted and there is no space at the end
// For more details on reading from a file this is a good resource:
//  https://gehrcke.de/2011/06/reading-files-in-c-using-ifstream-dealing-correctly-with-badbit-failbit-eofbit-and-perror/
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "TestObject.h"
using namespace std;

template <class T>
bool ReadObjectsFromFile(string fName);

int main()
{
	string fileName;
	cout << "File to Read Objects From: ";
	cin >> fileName;
	//ReadObjectsFromFile<string>(fileName);
	ReadObjectsFromFile<TestObject>(fileName);
    return 0;
}

template <class T>
bool ReadObjectsFromFile(string fName)
{
	ifstream inFile;

	inFile.open(fName);
	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			T item;
			inFile >> item;
			cout << item << endl;
		} 
		inFile.close();
	}
	else
	{
		cout << "File: " << fName << "not found" << endl;
	}
	return true;
}

