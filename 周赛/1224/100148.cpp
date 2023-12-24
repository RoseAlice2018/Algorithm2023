#include<vector>
using namespace std;
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i+= 2)
        {
            int alice = nums[i];
            int bob   = nums[i+1];
            ans.push_back(bob);
            ans.push_back(alice);
        }

        return ans;      
    }
};