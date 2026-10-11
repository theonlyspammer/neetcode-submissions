class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums[0];
        int m=nums[0];
        for(int l: nums){
            if(l<n&&l>=0){
                n=l;
            }
            if(l>m){
                m=l;
            }
        }
        for (int i = 1; i <= nums.size() + 1; i++) {
            if (find(nums.begin(), nums.end(), i) != nums.end()) {
                continue;
            }
            return i;
        }
    }
};