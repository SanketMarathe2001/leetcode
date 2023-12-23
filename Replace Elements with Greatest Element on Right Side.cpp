class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> arr1(arr.size());
        int gtr=-1,temp=0;
        for(int i=arr.size()-1;i>=0;i--){
            temp = arr[i];
            arr1[i] = gtr;
            gtr = max(gtr,temp);
        }
        return arr1;
    }
};
