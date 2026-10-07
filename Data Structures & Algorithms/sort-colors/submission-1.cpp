class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i0 = 0, i1 = 0, i2 = 0;

        for(int i : nums){
            if(i == 0) {
                i0 += 1;
            }
            if(i == 1) {
                i1 += 1;
            }
            if(i == 2) {
                i2 += 1;
            }
        }

        int j = 0;

        while(i0!=0) {
            nums[j++] = 0;
            i0--;
        }

        while(i1!=0) {
            nums[j++] = 1;
            i1--;
        }

        while(i2!=0) {
            nums[j++] = 2;
            i2--;
        }
    }
};