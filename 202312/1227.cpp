#include<vector>
#include<stack>
#include<queue>
using namespace std;
class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score_1 = 0, score_2 = 0;
        for(int i = 0; i < player1.size(); i++)
        {
            if(i == 1)
                score_1 += (player1[0] == 10 ? 2 * player1[1] : player1[1]);
            else if(i >= 2)
            {
                score_1 += (((player1[i - 1] == 10) || (player1[i - 2] == 10)) ? 2 * player1[i] : player1[i]);
            }
            else 
                score_1 += player1[0];
        }

        for(int i = 0; i < player2.size(); i++)
        {
            if(i == 1)
                score_2 += (player2[0] == 10 ? 2 * player2[1] : player2[1]);
            else if(i >= 2)
            {
                score_2 += (((player2[i - 1] == 10) || (player2[i - 2] == 10)) ? 2 * player2[i] : player2[i]);
            }
            else 
                score_2 += player2[0];
        }

        if(score_1 > score_2)
            return 1;
        else if(score_1 < score_2)
            return 2;
        return 0;
    }
};