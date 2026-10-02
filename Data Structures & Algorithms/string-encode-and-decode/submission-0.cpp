class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for (string str : strs) {
            encoded += to_string(str.length());;
            encoded.push_back('#');
            encoded+=str;
        }
        
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        
        int i=0;
        while (i < s.length()) {
            string d="";
            while(s[i]!='#'){
                d.push_back(s[i]);
                i++;
            }
            i++;
            string decoded="";
            int x = stoi(d);
            while(x!=0){
                decoded.push_back(s[i]);
                i++;x--;
            }
            strs.push_back(decoded);
        }

        return strs;
    }
};
