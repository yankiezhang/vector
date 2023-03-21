//
//  vector.hpp
//  vector
//
//  Created by Yang Zhang on 2023/3/15.
//

#ifndef vector_hpp
#define vector_hpp

#import "basic_vector.hpp"
#import <iostream>

template <typename T, int S> class vector;

#pragma mark - Friend Function Declaration
template <typename T, int S>
std::ostream& operator<<(std::ostream&, const vector<T, S> &v);

template <typename T, int S>
class vector : public basic_vector<T, S> {
    
    friend std::ostream& operator<< <>(std::ostream &out, const vector<T, S> &v);

public:
    static void test();
    
public:
    using basic_vector<T, S>::basic_vector;
    
};

template <typename T, int S>
void vector<T, S>::test() {
    vector<T, S> v;
    std::cout << v << std::endl;
}

#pragma mark - Friend Function Definition
template <typename T, int S>
std::ostream& operator<<(std::ostream& out, const vector<T, S> &v) {
    return out << v[0];
}

#endif /* vector_hpp */
