#include <vector>
using namespace std;
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {      
        int res = logs[0][0];
        int MaxWorkTime = 0;
        int LastDoneTime = 0;
        for(auto taski : logs)
        {
            
            int LastTime = taski[1] - LastDoneTime ;
            //Update LastDoneTime            
            LastDoneTime = taski[1];
            if(LastTime == MaxWorkTime)
            {
                MaxWorkTime = LastTime;
                res = min(res,taski[0]);
            }
            else if(LastTime > MaxWorkTime)
            {
                MaxWorkTime = LastTime;
                res = taski[0];
            }
        }
        return res;

    }
};