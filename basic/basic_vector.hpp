//
//  basic_vector.hpp
//  vector
//
//  Created by Yang Zhang on 2023/3/14.
//

#ifndef basic_vector_hpp
#define basic_vector_hpp

template <typename T, int S>
class basic_vector {
    
public:
    basic_vector(const T& a=0);
    basic_vector(const T (&a)[S]);
    
    const T& operator[](int i) const {return _arr[i];}
    
private:
    T _arr[S];
};

template <typename T, int S>
basic_vector<T, S>::basic_vector(const T& a) {
    for (int i=0; i<S; i++) {
        _arr[i] = a;
    }
}

template <typename T, int S>
basic_vector<T, S>::basic_vector(const T (&a)[S]) {
    for (int i=0; i<S; i++) {
        _arr[i] = a[i];
    }
}

#endif /* basic_vector_hpp */
