#include <vector>
using namespace std;
// class Solution {
// // public:
// //     int minCostClimbingStairs(vector<int>& cost) {
// //         int length = cost.size();
// //         int dp[length + 1];
// //         dp[0] = 0, dp[1] = 0;
// //         for(int idx = 2; idx <= length; idx++)
// //         {
// //             dp[idx] = min(dp[idx-1] + cost[idx-1], dp[idx-2] + cost[idx-2]);
// //         }

// //         return dp[length];
// //     }
// // };

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int length = cost.size();
        int level_1 = 0, level_2 = 0;
        int target = 0;
        for(int idx = 2; idx <= length; idx++)
        {
            target = min(level_1 + cost[idx - 1], level_2 + cost[idx - 2]);
            level_2 = level_1;
            level_1 = target;
        }

        return target;
    }
};