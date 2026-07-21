class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int curr = 1;

        for (int num : arr) {
            while (curr < num) {
                k--;
                if (k == 0) return curr;
                curr++;
            }
            curr = num + 1;
        }

        return curr + k - 1;
    }
};