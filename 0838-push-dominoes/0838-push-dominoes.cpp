class Solution {
public:
    string pushDominoes(string s) {
        int n = s.size();
        vector<int> forces(n, 0);

  
        int force = 0;              //right
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') force = n;
            else if (s[i] == 'L') force = 0;
            else force = max(force - 1, 0);
            forces[i] += force;
        }

        
        force = 0;                  //left 
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'L') force = n;
            else if (s[i] == 'R') force = 0;
            else force = max(force - 1, 0);
            forces[i] -= force;
        }

     
        string res;
        for (int f : forces) {
            if (f > 0) res += 'R';
            else if (f < 0) res += 'L';
            else res += '.';
        }

        return res;
    }
};