class Solution {
public:
    string countAndSay(int n) {
        // Base case
        string ans = "1";

        // Generate strings from 2 to n
        for (int i = 2; i <= n; i++) {
            string next = "";
            int count = 1;

            // Count consecutive same digits
            for (int j = 1; j < ans.size(); j++) {
                if (ans[j] == ans[j - 1]) {
                    count++;
                } else {
                    next += to_string(count);
                    next += ans[j - 1];
                    count = 1;
                }
            }

            // Add the last group
            next += to_string(count);
            next += ans.back();

            ans = next;
        }

        return ans;
    }
};