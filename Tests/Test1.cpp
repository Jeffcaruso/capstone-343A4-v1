//============================================================================
// Name        : Test1
// Test Desc.  : comprehensive testing of the enrollment system (everything)
// Author      : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023 - Winter 2024
//==========================================================n==================

#include <gtest/gtest.h>
#include "applib/enrollmentsystem.h"
#include "applib/course.h"
#include "applib/student.h"
#include "applib/university.h"

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// check enrollment system (the only & comprehensive test...)
TEST(Test1, TestStore1)
{
	cout << "Start testStore1" << endl;
	// Should do something more, but lets just read files
	// since each implementation will
	string cfile = "testcommands-1.txt";
	stringstream out;
	ifstream fs(cfile);
	assert(fs.is_open());
	char commandType;
	string discard;
	while (fs >> commandType)
	{
		out << commandType;
		getline(fs, discard);
	}
	fs.close();
	string result = "IHHBRIBBIH";
	assert(out.str() == result);
	cout << "End testStore1" << endl;
}
