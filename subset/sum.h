#ifndef _SUM_H_
#define _SUM_H_    
#include <vector>
#include <iostream>

typedef std::vector<int> Set; 
typedef std::pair<Set, Set> SubsetPair;

// Overload the operator<< to change the arguments 
std::ostream& operator<<(std::ostream& os, const SubsetPair& pair) {
    os << "Original set: [ ";
    for (const auto& elem : pair.first) {
        os << elem << " ";
    }
    os << "] Subset: [ ";
    for (const auto& elem : pair.second) {
        os << elem << " ";
    }
    os << "]";
    return os;
}

class subSetSum {
    public:
        int compute(const SubsetPair& subsets) {
            int sum = 0;
            std::vector<int> s1 = subsets.first;
            std::vector<int> s2 = subsets.second;
            for (int i = 0; i < s1.size(); i++) {
                for (int j = 0; j < s2.size(); j++) {
                    if (s1[i] == s2[j]) {
                        sum += s1[i];
                    }
                }
            }
            return sum;
        }



};
#endif 
