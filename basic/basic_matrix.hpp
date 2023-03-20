//
//  basic_matrix.hpp
//  vector
//
//  Created by Yang Zhang on 2023/3/20.
//

#ifndef basic_matrix_hpp
#define basic_matrix_hpp

template <typename T, int R, int C>
class basic_matrix {
    
public:
    basic_matrix(const T &a = 0);
    basic_matrix(const T (&a)[R][C]);
    
#pragma mark - Operation Declaration
    const T (&operator[](int i) const)[C];
    const basic_matrix<T, R, C>& operator+=(const basic_matrix<T, R, C> &m);
    const basic_matrix<T, R, C>& operator-=(const basic_matrix<T, R, C> &m);
    const basic_matrix<T, R, C>& operator*=(const int &mul);
    
private:
    T _m[R][C];
};

#pragma mark - Construction
template <typename T, int R, int C>
 basic_matrix<T, R, C>::basic_matrix(const T &a) {
     for (int i=0; i<R; i++) {
         for (int j=0; j<C; j++) {
             _m[i][j] = a;
         }
     }
}

template <typename T, int R, int C>
 basic_matrix<T, R, C>::basic_matrix(const T (&a)[R][C]) {
     for (int i=0; i<R; i++) {
         for (int j=0; j<C; j++) {
             _m[i][j] = a[i][j];
         }
     }
}

#pragma mark - Operation Definition
template <typename T, int R, int C>
const T (&basic_matrix<T, R, C>::operator[](int i) const)[C] {
    return _m[i];
}

template <typename T, int R, int C>
const basic_matrix<T, R, C>& basic_matrix<T, R, C>::operator+=(const basic_matrix<T, R, C> &m) {
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            _m[i][j] += m[i][j];
        }
    }
    return *this;
}

template <typename T, int R, int C>
const basic_matrix<T, R, C>& basic_matrix<T, R, C>::operator-=(const basic_matrix<T, R, C> &m) {
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            _m[i][j] -= m[i][j];
        }
    }
    return *this;
}

template <typename T, int R, int C>
const basic_matrix<T, R, C>& basic_matrix<T, R, C>::operator*=(const int &mul) {
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            _m[i][j] *= mul;
        }
    }
    return *this;
}

#endif /* basic_matrix_hpp */
