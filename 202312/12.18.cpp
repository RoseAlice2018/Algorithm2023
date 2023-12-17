#include <vector>
using namespace std;

/*
    边界情况要处理
*/

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int length = nums.size();

//         int l = 0, r = length - 1;
//         while(l < r)
//         {
//             int mid = (r + l) / 2;

//             //Condition 1
//             if( nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
//                 return mid;
            
//             //Conditon 2 to left 
//             else if( nums[mid - 1] > nums[mid] && nums[mid] > nums[mid + 1])
//             {
//                 r = mid - 1;
//             }
//             else 
//             {
//                 l = mid + 1;
//             }
//         }
//         return l;
//     }
// };

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // 辅助函数
        auto get = [&](int i) ->pair<int, int>{
            if(i == -1 || i == n){
                return {0, 0};
            } 
            return {1, nums[i]};
        };

        int l = 0, r = n - 1, ans = -1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(get(mid - 1) < get(mid) && get(mid) > get(mid + 1))
            {
                ans = mid;
                break;
            }

            if(get(mid) < get(mid + 1))
            {
                l = mid + 1; 
            }
            else 
            {
                r = mid - 1;
            }
        }

        return ans;
    }
};