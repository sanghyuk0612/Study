class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() <= 1) return s;

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < s.size(); i++) {
            expand(s, i, i, start, maxLen);       // 홀수
            expand(s, i, i + 1, start, maxLen);   // 짝수
        }

        return s.substr(start, maxLen);
    }

private:
    void expand(string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        int len = right - left - 1;

        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    }
};