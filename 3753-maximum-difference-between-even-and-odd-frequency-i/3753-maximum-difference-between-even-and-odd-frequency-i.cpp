class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        int oddmax = INT_MIN, evenmin = INT_MAX;
        for (char c : s){
            if (freq.count(c)>0) freq[c]++;
            else freq[c]=1;
        }

        for (auto i: freq){
            if (i.second%2==0) evenmin = min(evenmin, i.second);
            else oddmax = max(oddmax, i.second);
        }

        return oddmax-evenmin;

    }
};