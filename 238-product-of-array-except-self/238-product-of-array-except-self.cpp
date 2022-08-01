//Storing Prefix and Suffix array solution TC: O(n)  SC:O(n)
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> res(n,1);
        
//         vector<int> pre(n,1);
//         vector<int> post(n,1);
        
//         for(int i=1;i<n;i++){
//            pre[i]=pre[i-1]*nums[i-1];
//         }
        
//         for(int i=n-2;i>=0;i--){
//            post[i]=post[i+1]*nums[i+1];
//         }
        
//         for(int i=0;i<n;i++){
//            res[i]=pre[i]*post[i];
//         }
        
//         return res;
//     }
// };


//One Pass solution TC: O(n)  SC:O(1)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,1);
        
        for(int i=0, pre=1,post=1;i<n;i++){
            res[i]*=pre;
            pre*=nums[i];
            
            res[n-i-1]*=post;
            post*=nums[n-i-1];
        }
        return res;
    }
};

//Two Pass solution TC: O(2*n)  SC:O(1)
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> res(n,1);
        
//         int prefix=1;
//         for(int i=0;i<n;i++){
//             res[i]=prefix;
//             prefix*=nums[i];
//         }
        
//         int postfix=1;
//         for(int i=n-1;i>=0;i--){
//             res[i]*=postfix;
//             postfix*=nums[i];
//         }
//         return res;
//     }
// };