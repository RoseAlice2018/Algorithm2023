class Solution {
public:
    int countDigits(int num) {
        int ret = 0;
        int temp = num;
        while(temp > 0)
        {
            int val = temp % 10;
            if(num % val == 0)
                ret++;
            temp = (temp - val) / 10;
        }      
        return ret;
    }
};