class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = m-1;
        int index2 = n-1;
        int pos = m + n - 1;
        while(index2 >= 0 )
        {
            if(index1 >=0 && nums1[index1] > nums2[index2])
            {
                nums1[pos] = nums1[index1];
                index1--;
                pos--;
            }
            else
            {
                nums1[pos] = nums2[index2];
                index2--;
                pos--;
            }
        }
    }
};