// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int candidate = 0;
//         int count = 0;

//         for (int num : nums) {
//             if (count == 0) {
//                 candidate = num;
//             }

//             if (num == candidate) {
//                 count++;
//             } else {
//                 count--;
//             }
//         }

//         return candidate;
//     }
// };



class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());   //sort

        int freq = 1;
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }

            if (freq > nums.size() / 2) {
                return ans;
            }
        }

        return ans;
    }
};