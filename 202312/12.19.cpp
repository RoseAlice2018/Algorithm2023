#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string s1;
        for(auto tmp = words.begin() ; tmp != words.end(); tmp++)
            s1.push_back((*tmp)[0]);
        return s == s1;
    }
};