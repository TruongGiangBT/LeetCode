class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sub_str = ''
        result = 0
        for i in range(len(s)):
            if s[i] in sub_str:
                idx = sub_str.index(s[i])
                sub_str = sub_str[idx+1:]
                sub_str += s[i]
                
            else: sub_str+=s[i]

            if len(sub_str) > result:
                result = len(sub_str)
        return result