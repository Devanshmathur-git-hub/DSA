class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, bool> mp;

        for (int num : nums) {
            mp[num] = false;
        }

      
        for (auto &it : mp) {
            int key = it.first;

            if (mp.find(key - 1) == mp.end()) {
                mp[key] = true;
            }
        }

        int ans = 0;

       
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