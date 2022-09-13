// WHILE LOOP -> O(logn)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left-(left-right)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int end=nums.size()-1;
//         int start=0;
//         return helper(nums, start, end, target);
//     }

//     int helper(vector<int>& nums, int start, int end, int target){
//         int mid=start-(start-end)/2;
        
//         if(end>=start){
//             if(nums[mid]==target){
//                 return mid;
//             }
//             else if(nums[mid]>target){
//                 return helper(nums, start, mid-1, target);
//             }
//             else if(nums[mid]<target){
//                 return helper(nums, mid+1, end, target);
//             }
//         }
//         return -1;
//     }
// };