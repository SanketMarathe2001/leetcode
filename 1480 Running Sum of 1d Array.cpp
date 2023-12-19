class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int r=0;
        for(int i=0;i<nums.size();i++){
            r+=nums[i];
            sum.push_back(r);
        }
        return sum;
    }
};
