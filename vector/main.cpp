//
//  main.cpp
//  vector
//
//  Created by Yang Zhang on 2023/3/10.
//

#include <iostream>
#include "vector.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    const int array[5] = {0};
    vector<int, 5> v;
    vector<int, 5> v1 = array;
    std::cout << v << v1;
    
    std::cout << "Hello, World!\n";
    return 0;
}
