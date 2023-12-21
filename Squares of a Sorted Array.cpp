class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> array(nums.size());
        for(int i=0;i<nums.size();i++){
            array[i] = (int) abs(pow(nums[i],2));
        }
        sort(array.begin(),array.end());

        return array;
    }
};
