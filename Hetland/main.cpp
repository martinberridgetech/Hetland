//
//  main.cpp
//  Hetland
//
//  Created by berridge martin on 10/21/14.
//  Copyright (c) 2014 berridge martin. All rights reserved.
//

#define  BOOST_TEST_MODULE Suites

#include <boost/test/included/unit_test.hpp>
/*
 int main(int argc, const char * argv[])
 {
 
 // insert code here...
 std::cout << "Hello, World!\n";
 return 0;
 }
 */


BOOST_AUTO_TEST_SUITE(mitstack)


BOOST_AUTO_TEST_CASE(mitstack)
{
    BOOST_CHECK_MESSAGE(false, "Everything's OK really");
}

BOOST_AUTO_TEST_SUITE_END()
