class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int i = word1.length();
    int j = word2.length();
    int k = j;
    if(i>j){
        k=i;
        }
    string ans;   
    while(k>0){
        if(i!=0){
            ans.push_back(word1[word1.length()-i]);
            i--;
        }
        if(j!=0){
            ans.push_back(word2[word2.length()-j]);
            j--;
        }
        k--;
    }
    return ans;
    }
};