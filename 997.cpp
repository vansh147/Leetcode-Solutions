class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         if (n == 1) 
            return 1;  
        unordered_map<int, int> trustCount;
        unordered_map<int, bool> trustedByOthers;      
        for (auto v : trust) {
            trustCount[v[1]]++;
            trustedByOthers[v[0]] = true; 
        }      
        for (auto i : trustCount) {
            if (i.second == n - 1 && !trustedByOthers[i.first]) {
                return i.first;
            }
        }
        return -1;
    }
};