class Solution {
public:
    unordered_map<int, int> memo;

    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        memo.clear();

        int maxi = 0;
        for (int j : s) {
            maxi = max(maxi, lcs(s, j));
        }
        return maxi;
    }

    int lcs(unordered_set<int>& s, int r) {
        if (s.find(r) == s.end()) {
            return 0;
        }

        if (memo.find(r) != memo.end()) {
            return memo[r];
        }

        return memo[r] = 1 + lcs(s, r + 1);
    }
};