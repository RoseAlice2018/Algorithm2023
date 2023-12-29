#include<vector>
#include<stack>
#include<queue>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min_1 = prices[0], min_2 = prices[1];

        if(min_1 > min_2)
            swap(min_1, min_2);

        for(int index = 2; index < prices.size(); index++)
        {
            if(prices[index] < min_1)
            {
                min_2 = min_1;
                min_1 = prices[index];
            }
            else if(prices[index] > min_2)
            {

            }
            else 
            {
                min_2 = prices[index];
            }
        }
        
        int left = money - min_1 - min_2;
        return left >= 0 ? left : money;
    }
};