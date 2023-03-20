//
//  matrix.hpp
//  vector
//
//  Created by Yang Zhang on 2023/3/20.
//

#ifndef matrix_hpp
#define matrix_hpp

#import "basic_matrix.hpp"
#import <iostream>

void test_matrix();

template <typename T, int R, int C>
class matrix : public basic_matrix<T, R, C> {
    
public:
    using basic_matrix<T, R, C>::basic_matrix;
    
    friend void test_matrix();
    
    friend std::ostream& operator<<(std::ostream& out, const matrix<T, R, C>& m) {
        return out << m[0][0];
    }
};

#endif /* matrix_hpp */
