class Solution {
public:
    bool dfs(string &s, int pos, int tot, int target) {
        if (pos == s.size()) {
            return tot == target;
        } 
        int sum = 0;
        for (int i = pos; i < s.size(); i++) {
            sum = sum * 10 + s[i] - '0';
            if (sum + tot > target) {
                break;
            }
            if (dfs(s, i + 1, sum + tot, target)) {
                return true;
            }
        }
        return false;
    }
    
    int punishmentNumber(int n) {
        int res = 0;
        for (int i = 1; i <= n; i++) {
            string s = to_string(i * i);
            if (dfs(s, 0, 0, i)) {
                res += i * i;
            }
        }
        return res;
    }
};

作者：力扣官方题解
链接：https://leetcode.cn/problems/find-the-punishment-number-of-an-integer/solutions/2496001/qiu-yi-ge-zheng-shu-de-cheng-fa-shu-by-l-ht5e/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。