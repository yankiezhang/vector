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

void test_vector();

template <typename T, int S>
class vector : public basic_vector<T, S> {
    
public:
    using basic_vector<T, S>::basic_vector;
        
    friend std::ostream& operator<<(std::ostream& out, const vector<T, S>& v) {
        return out << v[0];
    }
    
    friend void test_vector();
};

#endif /* vector_hpp */
