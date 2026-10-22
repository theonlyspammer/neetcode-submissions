class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%(nums.size());
        int i=0;
        int j= nums.size()-1;
        while(i<=j){
            int temp =nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        int l=k-1;
        i=0;
        while(i<=l){
            int temp =nums[i];
            nums[i]=nums[l];
            nums[l]=temp;
            i++;
            l--;
        }
        l=k;
        j=nums.size()-1;
        while(l<=j){
            int temp =nums[l];
            nums[l]=nums[j];
            nums[j]=temp;
            l++;
            j--;
        }
    }
};