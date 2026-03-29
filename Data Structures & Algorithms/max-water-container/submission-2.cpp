class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int lo = 0, hi = n-1;
        int maxAr = INT_MIN;
        while(lo<hi){
            maxAr = max(maxAr, min(heights[lo], heights[hi])*(hi-lo));
            if(heights[lo]>heights[hi]) hi--;
            else lo++;
        }
        return maxAr;
    }
};
