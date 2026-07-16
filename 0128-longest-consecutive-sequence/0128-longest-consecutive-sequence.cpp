class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int num : st) {
            // Start only if num is the first element of a sequence
            if (st.find(num - 1) == st.end()) {
                int curr = num;
                int len = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    len++;
                }

                longest = max(longest, len);
            }
        }

        return longest;
    }
};


// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         unordered_map<int, bool> mp;

//         for (int num : nums) {
//             mp[num] = false;
//         }
//         for (auto &it : mp) {
//             int key = it.first;

//             if (mp.find(key - 1) == mp.end()) {
//                 mp[key] = true;
//             }
//         }

//         int ans = 0;
       
//         for (auto &it : mp) {
//             int key = it.first;
//             if (mp[key]) {
//                 int k = 1;
//                 while (mp.find(key + k) != mp.end()) {
//                     k++;
//                 }
//                 ans = max(ans, k);
//             }
//         }

//         return ans;
//     }
// };