class Solution {
public:
    bool canPaint(vector<int>& nums, int k, int maxWork) {
        int painters = 1;
        int currentWork = 0;

        for (int board : nums) {
            if (currentWork + board <= maxWork) {
                currentWork += board;
            } else {
                painters++;
                currentWork = board;
            }
        }

        return painters <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canPaint(nums, k, mid)) {
                high = mid - 1;   // Try a smaller maximum sum
            } else {
                low = mid + 1;    // Increase the allowed maximum sum
            }
        }

        return low;
    }
};