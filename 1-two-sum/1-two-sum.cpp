//Brute Force Solution TC: O(n^2)  SC:O(1)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int size=nums.size();
//         vector<int> result;
//         for(int i=0;i<size;i++){
//             for(int j=i+1;j<size;j++){
//                 if(nums[i]+nums[j]==target){
//                     result.push_back(i);
//                     result.push_back(j);
//                     break;
//                 }
//             }
//         }
//         return result;
//     }
// };


//Two Pointer Solution TC: O(n)  SC:O(1)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int size=nums.size();
//         vector<pair<int,int>> v;
        
//         for(int i=0;i<size;i++){
//             v.push_back({nums[i],i});
//         }
        
//         sort(v.begin(),v.end());
//         int index1,index2;
//         int i=0,j=size-1;
        
//         while(i<j){
//             int ans=v[i].first + v[j].first;
//             if(ans==target){
//                 index1=v[i].second;
//                 index2=v[j].second;
//                 break;
//             }
//             else if(ans<target){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
        
//         return {index1,index2};
//     }
// };



//Hashing solution TC: O(n)  SC:O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;
        int size=nums.size();
        vector<int> ans;
        
        
        for(int i=0;i<size;i++){
            int complement=target-nums[i];
            if(mp.find(complement)!=mp.end()){
                ans.push_back(mp[complement]);
                ans.push_back(i);
                break;
            }
            mp.insert({nums[i],i});
        }
        return ans;
    }
};