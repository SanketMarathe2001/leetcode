class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index=-1,n=nums.size();
        int max = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                // If current value is greater than max
                // value then replace it with max value
                max = nums[i];
                index = i;
            }
        }
        for(int j = 0;j < nums.size(); j++){
            if(nums[j]!=max && max < 2*nums[j])
                return -1;
        }
        return index;
    }
};
