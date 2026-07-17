class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int n = words.size();
        int i = 0;

        while (i < n) {
            int letterCount = words[i].length();
            int j = i + 1;
            while (j < n &&
                   letterCount + words[j].length() + (j - i) <= maxWidth) {
                letterCount += words[j].length();
                j++;
            }
            int gaps = j - i - 1;
            int totalSpaces = maxWidth - letterCount;
            string line;
            if (j == n || gaps == 0) {
                line += words[i];
                for (int k = i + 1; k < j; k++) {
                    line += ' ';
                    line += words[k];
                }
                while (line.length() < maxWidth)
                    line += ' ';
            }
            else {
                int spaceEach = totalSpaces / gaps;
                int extra = totalSpaces % gaps;

                for (int k = i; k < j - 1; k++) {
                    line += words[k];

                    line.append(spaceEach, ' ');

                    if (extra > 0) {
                        line += ' ';
                        extra--;
                    }}
                line += words[j - 1];
            }
            ans.push_back(line);
            i = j;
        }
        return ans;
    }
};