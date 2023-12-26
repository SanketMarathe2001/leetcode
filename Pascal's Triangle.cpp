class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas;
        for(int n = 1; n <= numRows; n++){
        vector<int> arr;
        int val = 1;
            for(int r = 1; r <= n; r++){             
                arr.push_back(val);
                val = val * (n - r)/r;
            }
        pas.push_back(arr);
        }
        return pas;
    }
};
