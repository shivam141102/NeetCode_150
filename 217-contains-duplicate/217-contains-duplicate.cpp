class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int size=nums.size();
        for(int i=0;i<size;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};