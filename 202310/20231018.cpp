class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> q(nums.begin(), nums.end());
        long long ans = 0;
        for (int _ = 0; _ < k; ++_) {
            int x = q.top();
            q.pop();
            ans += x;
            q.push((x + 2) / 3);
        }
        return ans;
    }
};

作者：力扣官方题解
链接：https://leetcode.cn/problems/maximal-score-after-applying-k-operations/solutions/2484596/zhi-xing-k-ci-cao-zuo-hou-de-zui-da-fen-a1jub/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。