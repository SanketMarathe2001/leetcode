class Solution {
public:
    int countdigit(int n){
        int count=0;
        while(n>0){
            n=n/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i=0;i<nums.size();i++){
            if(countdigit(nums[i])%2==0)
                even++;
        }
        return even;
    }
};
