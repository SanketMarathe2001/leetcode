class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> e,o;
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 ==0)
                e.push_back(nums[i]);
            else
                o.push_back(nums[i]);
        }
        e.insert(e.end(),o.begin(),o.end());
        return e;
    }
};
