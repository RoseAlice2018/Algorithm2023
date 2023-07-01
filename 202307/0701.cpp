class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> store_num;
        for(int i = 0 ;i  < nums.size(); i++)
        {
            if(store_num.count(nums[i]) && 2 * nums[i] == target)
            {
                vector<int> ret{i, store_num[target - nums[i]]};
                return ret;                
            }
            store_num[nums[i]] = i;
        }      
        for(int i = 0; i < nums.size(); i++)
        {
            if( store_num.count(target - nums[i]) && i != store_num[target - nums[i]])
            {
                vector<int> ret{i, store_num[target - nums[i]]};
                return ret;
            }
        }
        vector<int> ret(0);
        return ret;
    }
};