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
    basic_matrix(const T& a = 0);
    
#pragma mark - Operation Declaration
    const T (&operator[](int i) const)[C] { return _m[i]; }
    
private:
    T _m[R][C];
};

template <typename T, int R, int C>
 basic_matrix<T, R, C>::basic_matrix(const T& a) {
     for (int i=0; i<R; i++) {
         for (int j=0; j<C; j++) {
             _m[i][j] = a;
         }
     }
}

#endif /* basic_matrix_hpp */
