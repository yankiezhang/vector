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

#pragma mark - Friend Function Declaration
template <typename T, int R, int C>
const matrix<T, R, C> operator+(const matrix<T, R, C>&, const matrix<T, R, C>&);

template <typename T, int R, int C>
std::ostream& operator<<(std::ostream&, const matrix<T, R, C>&);

template <typename T, int R, int C>
class matrix : public basic_matrix<T, R, C> {
    
    friend std::ostream& operator<< <>(std::ostream& out, const matrix<T, R, C>& m);
    friend const matrix<T, R, C> operator+ <>(const matrix<T, R, C> &v1, const matrix<T, R, C> &v2);
    
public:
    static void test();
    
public:
    using basic_matrix<T, R, C>::basic_matrix;
        
};

template <typename T, int R, int C>
void matrix<T, R, C>::test() {
    matrix<T, R, C> m;
    std::cout << m << std::endl;;
}

#pragma mark - Friend Function Definition
template <typename T, int R, int C>
std::ostream& operator<<(std::ostream& out, const matrix<T, R, C> &m) {
    return out << m[0][0];
}

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
