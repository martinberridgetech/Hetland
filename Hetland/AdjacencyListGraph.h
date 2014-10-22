//
//  AdjacencyListGraph.h
//  Hetland
//
//  Created by berridge martin on 10/22/14.
//  Copyright (c) 2014 berridge martin. All rights reserved.
//

#ifndef Hetland_AdjacencyListGraph_h
#define Hetland_AdjacencyListGraph_h

#include <set> 
#include <map>
#include <vector> 

using namespace::std ;

template <typename T>
class AdjacencyListGraph {
    
    set<T> nodes_;
    map<T, set<T> > list_ ;

private :
    void makeSetFromVectorUsingInsertor(const vector<T> & v){
        std::copy( v.begin(), v.end(), std::inserter( nodes_, nodes_.end() ) );
    }
    
    
public:
    AdjacencyListGraph<T> (){}
    
    AdjacencyListGraph<T> (const vector<T> & nodes, const vector<T> & neighbours){
        makeSetFromVectorUsingInsertor(nodes);
            
    }
    
};


#endif
