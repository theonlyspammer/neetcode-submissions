class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low = 0;
        int high = heights.size()-1;
        int ans = 0;
        while(low<high){
            int breadth = high - low;
            int length = min(heights[low],heights[high]);
            int temp = breadth * length;
            ans = max(ans,temp);

            if(heights[low]<heights[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return ans;
    }
};
