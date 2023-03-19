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
    
#pragma mark - Operation declaration
    const T& operator[](int i) const {return _arr[i];}
    const basic_vector<T, S>& operator+=(const basic_vector<T, S>& v);
    const basic_vector<T, S>& operator-=(const basic_vector<T, S>& v);
    const basic_vector<T, S>& operator*=(const T &a);
    
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

#pragma mark - Operation definition
template <typename T, int S>
const basic_vector<T, S>& basic_vector<T, S>::operator+=(const basic_vector<T, S>& v) {
    for (int i=0; i<S; i++) {
        _arr[i] += v[i];
    }
    return *this;
}

template <typename T, int S>
const basic_vector<T, S>& basic_vector<T, S>::operator-=(const basic_vector<T, S>& v) {
    for (int i=0; i<S; i++) {
        _arr[i] -= v[i];
    }
    return *this;
}

template <typename T, int S>
const basic_vector<T, S>& basic_vector<T, S>::operator*=(const T &a) {
    for (int i=0; i<S; i++) {
        _arr[i] *= a;
    }
    return *this;
}

#endif /* basic_vector_hpp */
