
class Solution {          //O(n)
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = nums[0];
        int max_sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            current_sum = max(nums[i], current_sum + nums[i]);
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};















// //class Solution {
// //public:
// //    int maxSubArray(vector<int>& nums) {
// //
//   //      int sum = 0;
//     //    int maxi = nums[0];
// //
//   //      for(int num : nums) {
//     //        sum += num;
//       //      maxi = max(maxi, sum);
//         //    if(sum < 0)
//           //      sum = 0;
//        // }

//  //       return 0;
// //    }
// // };

// //kadanse algo

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int current_sum = nums[0];
//         int max_sum = nums[0];
//         for (int i = 1; i < nums.size(); i++) {
//             current_sum = max(nums[i], current_sum + nums[i]);
//             max_sum = max(max_sum, current_sum);
//         }
//         return max_sum;
//     }
// };

// 1752,33,second,81,209,cont acunrand anagram