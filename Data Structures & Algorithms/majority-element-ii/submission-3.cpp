class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ig;
        int l = nums.size()/3;
        for(int i: nums){
            int c =0;
            c = count(nums.begin(), nums.end(),i);
            if ((find(ig.begin(), ig.end(), i) == ig.end())&&(c>l)){
                ig.push_back(i);
            }            
        }
    return ig;
    }
};