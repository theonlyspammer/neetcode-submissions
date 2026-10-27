class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> a;
        for(char C: s){
        if ((C >= 'A' && C <= 'Z') ||(C >= 'a' && C <= 'z') ||(C >= '0' && C <= '9')){
                a.push_back(tolower(C));
            }
        }
        int right = a.size()-1;
        int left = 0;
        while(left<right){
            if(a[left]!=a[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
