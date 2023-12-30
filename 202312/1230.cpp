#include<vector>
#include<stack>
#include<queue>
#include<string>
using namespace std;
class Solution {
public:

    string dayOfTheWeek(int day, int month, int year) {
        vector<int> monthdays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        static string res[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

        int days = 365 * (year - 1971) + (year - 1969) / 4;
        for(int i = 0; i < month - 1; i++)
        {
            days += monthdays[i];
        }
        if((year % 400 == 0|| (year % 4 == 0 && year % 100 != 0)) && month > 3)
        {
            days += 1;
        }

        days += day;
        return res[(days + 3) % 7];

    }
};