//============================================================================
// Name        : Test1
// Test Desc.  : comprehensive testing of the enrollment system (everything)
// Author      : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023 - Winter 2024
//==========================================================n==================

#include <gtest/gtest.h>

//TODO (Student) add your classes following the format of the include below. (note, do not use <> for your classes)
//#include "applib/<yourclass>.h"


#include <iostream>
#include <sstream>
#include <vector>

using namespace std;


TEST(Test1, TestStore1)
{
	// cout << "Start testStore1" << endl;
	// // Should do something more, but lets just read files
	// // since each implementation will
	// string cfile = "testcommands-1.txt";
	// stringstream out;
	// ifstream fs(cfile);
	// assert(fs.is_open());
	// char commandType;
	// string discard;
	// while (fs >> commandType)
	// {
	// 	out << commandType;
	// 	getline(fs, discard);
	// }
	// fs.close();
	// string result = "IHHBRIBBIH";
	// assert(out.str() == result);
	// cout << "End testStore1" << endl;

	//TODO (Student) write your own gTests here...

	//maybe data4commands.txt?

	//a gTest that will fail
	EXPECT_TRUE(1 == 2);

}
