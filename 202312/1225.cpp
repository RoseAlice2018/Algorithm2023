#include<vector>
using namespace std;
class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> res;
        int a = tomatoSlices - 2 * cheeseSlices;
        int b = 4 * cheeseSlices - tomatoSlices;
        if( a < 0 || b < 0 || a % 2 != 0 || b % 2 != 0)
            return res;
        res.push_back(a / 2);
        res.push_back(b / 2);
        return res;
    }
};