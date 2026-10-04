class Solution {
public:
    char findTheDifference(string s, string t) {
      
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        // Compare character by character
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != t[i]) {
                return t[i]; 
            }
        }
        // If all matched, the extra character must be the very last one in t
        return t[t.length() - 1];
    }
};