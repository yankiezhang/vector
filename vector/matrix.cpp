//
//  matrix.cpp
//  vector
//
//  Created by Yang Zhang on 2023/3/20.
//

#include "matrix.hpp"

void test_matrix()
{
    matrix<int, 5, 5> m;
    matrix<int, 5, 5> m1 = {1};
    
    std::cout << m << std::endl;
    std::cout << m+m1 << std::endl;
}
