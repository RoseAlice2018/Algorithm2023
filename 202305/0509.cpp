#include <string>
class Solution {
public:
    int countTime(string time) {
        int countHour = 0;
        int countMinute = 0;
        for (int i = 0; i < 24; i++) {
            int hiHour = i / 10;
            int loHour = i % 10;
            if ((time[0] == '?' || time[0] == hiHour + '0') && 
                (time[1] == '?' || time[1] == loHour + '0')) {
                countHour++;
            }
        } 
        for (int i = 0; i < 60; i++) {
            int hiMinute = i / 10;
            int loMinute = i % 10;
            if ((time[3] == '?' || time[3] == hiMinute + '0') && 
                (time[4] == '?' || time[4] == loMinute + '0')) {
                countMinute++;
            }
        }
        return countHour * countMinute;
    }
};

作者：力扣官方题解
链接：https://leetcode.cn/problems/number-of-valid-clock-times/solutions/2261803/you-xiao-shi-jian-de-shu-mu-by-leetcode-j7gqz/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。