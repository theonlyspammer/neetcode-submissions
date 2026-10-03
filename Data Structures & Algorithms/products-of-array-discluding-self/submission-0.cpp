class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product1 = 1;
        int product2 = 1;
        int k = nums.size();
        vector<int> prefix,suffix,ans;
        for (int i = 0; i < k; i++) {
        prefix.push_back(product1);
        product1 *= nums[i];
        }
        for (int i = k-1; i >=0; i--) {
        suffix.push_back(product2);
        product2 *= nums[i];
        }
        for (int i = 0; i<k;i++){
            ans.push_back(prefix[i]*suffix[k-i-1]);
        }
        return ans;
    }
};
