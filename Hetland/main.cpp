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

#include "AdjacencyListGraph.h"
BOOST_AUTO_TEST_SUITE(graphs)


BOOST_AUTO_TEST_CASE(adjacent)
{
    AdjacencyListGraph<int> graph;
    BOOST_CHECK_MESSAGE(false, "Found Edge");
    BOOST_CHECK_MESSAGE(false, "Didnt Find Edge");
}

BOOST_AUTO_TEST_CASE(neigbours)
{
    BOOST_CHECK_MESSAGE(false, "One Neighbour");
    BOOST_CHECK_MESSAGE(false, "No Neighbours");
    BOOST_CHECK_MESSAGE(false, "Many Neighbours");
}

BOOST_AUTO_TEST_CASE(addremoveedge)
{
    BOOST_CHECK_MESSAGE(false, "No Neighours edge not added");
    BOOST_CHECK_MESSAGE(false, "Edge Added neighbours found");
    BOOST_CHECK_MESSAGE(false, "Edge Deleted neighbouts not found");
}

BOOST_AUTO_TEST_CASE(edgeweightings)
{
    BOOST_CHECK_MESSAGE(false, "Edge Value ");
    BOOST_CHECK_MESSAGE(false, "Edge Value after it is set");
}




BOOST_AUTO_TEST_SUITE_END()
