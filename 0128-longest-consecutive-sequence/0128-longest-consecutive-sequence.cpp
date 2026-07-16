class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, bool> mp;

        // Store every unique number
        for (int num : nums) {
            mp[num] = false;
        }

        // Mark only starting points
        for (auto &it : mp) {
            int key = it.first;

            if (mp.find(key - 1) == mp.end()) {
                mp[key] = true;
            }
        }

        int ans = 0;

        // Count sequence length from every starting point
        for (auto &it : mp) {
            int key = it.first;

            if (mp[key]) {
                int k = 1;

                while (mp.find(key + k) != mp.end()) {
                    k++;
                }

                ans = max(ans, k);
            }
        }

        return ans;
    }
};