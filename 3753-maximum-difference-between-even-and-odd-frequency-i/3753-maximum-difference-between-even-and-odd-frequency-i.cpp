class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        int oddmax = -1, evenmin = 101;
        for (char c : s){
            freq[c]++;
        }

        for (auto [_,i]: freq){
            if (i%2==0) evenmin = min(evenmin, i);
            else oddmax = max(oddmax, i);
        }

        return oddmax-evenmin;

    }
};