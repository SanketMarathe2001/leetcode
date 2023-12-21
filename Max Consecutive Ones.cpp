class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=0, count=0,mask=0;
        for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            mask = (mask << 1) | 1;
        } else {
            mask = mask << 1;
        }
        if ((nums[i] & mask) != 0) {
            count++;
        } else {
            max_count = max(max_count, count);
            count = 0;
            mask = 0;
        }
        }
        max_count = max(max_count, count);
        return max_count;
    }
};
