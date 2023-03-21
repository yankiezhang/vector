//
//  main.cpp
//  vector
//
//  Created by Yang Zhang on 2023/3/10.
//

#include <iostream>
#include "vector.hpp"
#include "matrix.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int, 5>::test();
    matrix<int, 5, 5>::test();
    std::cout << "Hello, World!\n";
    return 0;
}
