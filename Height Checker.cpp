class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ord = heights;
        int c=0;
        sort(ord.begin(),ord.end());
        for(int i=0;i<heights.size();i++){
            if (heights[i]!=ord[i])
                c++;
        }
        return c;
    }
};
