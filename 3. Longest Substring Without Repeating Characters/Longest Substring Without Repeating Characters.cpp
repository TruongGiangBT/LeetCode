class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string sub_str = "";
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            size_t idx = sub_str.find(s[i]);
            if (idx != string::npos){
                sub_str = sub_str.substr(idx+1,string::npos);
                sub_str += s[i]; 
            }else{
                sub_str += s[i]; 
            }
            if (sub_str.size() > result){
                result = sub_str.size();
            }
        }
        return result;
    }
};