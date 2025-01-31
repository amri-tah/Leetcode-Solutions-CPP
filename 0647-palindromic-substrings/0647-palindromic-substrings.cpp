class Solution {
public:
    int countSubstrings(string s) {
        int count = 0, n = s.size();

        // Even pallindromes
        for (int i = 0; i < n; i++) {
            int start = i, end = i+1;
            while (start >= 0 && end < n && s[start] == s[end]) {
                count++;
                start -= 1;
                end += 1;
            }

            // Odd length pallindromes
            start = i; end = i;
            while (start >= 0 && end < n && s[start] == s[end]) {
                count++;
                start -= 1;
                end += 1;
            }
        }
        return count;
    }
};