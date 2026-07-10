class Solution {
public:
    void solve(vector<int>& nums, vector<int>& curr,
               vector<vector<int>>& ans, vector<bool>& visited) {

        if (curr.size() == nums.size()) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            // Already used
            if (visited[i])
                continue;

            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1] && !visited[i - 1])
                continue;

            curr.push_back(nums[i]);
            visited[i] = true;

            solve(nums, curr, ans, visited);

            curr.pop_back();
            visited[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> visited(nums.size(), false);

        solve(nums, curr, ans, visited);

        return ans;
    }
};