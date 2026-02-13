class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s=="") {
            return 0;
        }
        int maxN= 1;
        vector<int> data(s.size(),1);
        for (int i = 0;i<s.size();i++) {
            unordered_set<int> tmp;
            tmp.insert(s[i]);
            int cnt= 1;
            for (int j = i+1; j<s.size(); j++) {
                if(!tmp.count(s[j])) {
                    tmp.insert(s[j]);
                    cnt++;
                }
                else {
                    break;
                }
            }
            if (cnt > maxN) {
                maxN = cnt;
            }
        }
        return maxN;
    }
};