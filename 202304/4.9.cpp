#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int first_location[26];
        for(int i = 0 ;i < 26; i++)
            first_location[i] = -1;
        for(int i = 0; i < s.size(); i++)
        {
            int word = s[i] - 'a';
            if(first_location[word] == -1)
                first_location[word] = i;
            else 
            {
                int distance_ = i - first_location[word] -1;
                printf("location: %d\n",first_location[word]);
                if(distance[word] != distance_)
                {
                    printf("word : %d distance_: %d distance: %d",word,distance_,distance[word]);
                    return false;
                }
            }
        }
        return true;
    }
};