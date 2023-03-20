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

template <typename T, int R, int C> class matrix;
template <typename T, int R, int C>
const matrix<T, R, C> operator+(const matrix<T, R, C>&, const matrix<T, R, C>&);

template <typename T, int R, int C>
class matrix : public basic_matrix<T, R, C> {
    
public:
    using basic_matrix<T, R, C>::basic_matrix;
    
    friend void test_matrix();
    
    friend std::ostream& operator<<(std::ostream& out, const matrix<T, R, C>& m) {
        return out << m[0][0];
    }
    
    friend const matrix<T, R, C> operator+ <>(const matrix<T, R, C> &v1, const matrix<T, R, C> &v2);
};

template <typename T, int R, int C>
const matrix<T, R, C> operator+(const matrix<T, R, C> &v1, const matrix<T, R, C> &v2) {
    T m[R][C];
    
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            m[i][j] = v1[i][j] + v2[i][j];
        }
    }
    
    return m;
}

#endif /* matrix_hpp */
