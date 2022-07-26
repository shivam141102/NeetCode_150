class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int size1=s.size();
        int size2=t.size();
        
        if(size1!=size2) return false;
        unordered_map<char, int> mp;
        for(int i=0;i<size1;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(int i=0;i<size1;i++){
            if(mp[s[i]]!=0) return false;
        }
        return true;
    }
};