#include <vector>
using namespace std;

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ret = 0, pre = -1;
        for(int i = 0; i < forts.size(); i++)
        {
            if(forts[i] == 1 || forts[i] == -1)
            {
                if(pre == -1)
                {
                    pre = i;
                    continue;
                }
                if(forts[i] != forts[pre])
                    ret = max(ret, i - pre - 1);
                pre = i;
            }
        }
        return ret;
    }
};