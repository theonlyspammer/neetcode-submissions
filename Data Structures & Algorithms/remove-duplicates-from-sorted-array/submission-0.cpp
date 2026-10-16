class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> set1;
        for(int i: nums){
            if(!set1.contains(i)){
                set1.insert(i);
            }
        }
        int j = 0;
        for (int i : nums) {
            if (set1.contains(i)) {
                nums[j++] = i;
                set1.erase(i);
            }
        }
    return j;
    }
};