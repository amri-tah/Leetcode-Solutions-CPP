class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        int n = s.size();
        unordered_map<char, int> hashmap;
        for (int i=0; i<n; i++){
            hashmap[s[i]]++;
        }

        for (int i=0; i<n; i++){
            hashmap[t[i]]--;
            if (hashmap[t[i]]==0) hashmap.erase(t[i]);
        }

        return hashmap.size()==0;
    }
};