class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int slen = s.length();
        set<char> hs;

        if (slen == 1) {
            return 1;
        }
        if (slen == 0) {
            return 0;
        }

        // hs.insert(s[0]);

        int r = 0;
        int l = 0;
        int maxlen = 0;

        while(r < slen) {
            if (hs.contains(s[r])) {
                hs.erase(s[l]);
                l++;
            } else {
                hs.insert(s[r]);
                r++;
            }
            int curlen = hs.size();
            if (curlen > maxlen) {
                maxlen = curlen;
            }
        }

        return maxlen;
    }
};
