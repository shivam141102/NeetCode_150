
//Sorting solution TC: O(nlogn)  SC:O(1)
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.size()!=t.size()) return false;
        
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//         return s==t;            
//     }
// };


//Array solution TC: O(n)  SC:O(1)
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;
//         int n = s.length();
//         int counts[26] = {0};
//         for (int i = 0; i < n; i++) { 
//             counts[s[i] - 'a']++;
//             counts[t[i] - 'a']--;
//         }
//         for (int i = 0; i < 26; i++)
//             if (counts[i]) return false;
//         return true;
//     }
// };


//Hashmap solution TC: O(n)  SC:O(n)
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