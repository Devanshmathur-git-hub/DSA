class Solution {
public:
    int singleNumber(vector<int>& nums) { // & to pass by refrence
        int ans = 0;

        for(int val : nums){
          ans = ans ^ val;

        }
        return ans;
   }
};








// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int result = 0;
//         for(int i = 0; i < nums.size(); i++) {
//             result = result^nums[i];
//         }

//         return result;
//     }
// };