//
//  vector.cpp
//  vector
//
//  Created by Yang Zhang on 2023/3/15.
//

#include "vector.hpp"

void test() {
    vector<int, 5> v;
    vector<int, 5> v1 = {1};
    
    std::cout << v << std::endl
    << v1 << std::endl;
    
    v +=v1;
    std::cout << v << std::endl;

    v *= 5;
    std::cout << v << std::endl;
    
}
