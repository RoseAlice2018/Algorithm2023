#include<vector>
using namespace std;

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int res = 0;
        vector<int> n(grid[0].size(), 0);
        vector<int> m(grid.size(), 0);
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] != 0)
                {
                    m[i] ++;
                    n[j] ++;
                }
            }
        }
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] != 0)
                {
                    if(m[i] >= 2 || n[j] >= 2)
                        res++;
                }
            }
        }
        return res;
    }
};