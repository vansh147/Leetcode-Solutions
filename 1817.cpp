class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
          int n=logs.size();
        vector<int> ans(k,0);
        set<pair<int, int>> st;
        
        for(int i=0;i<n;i++)
            st.insert({logs[i][0], logs[i][1]});
        
       
        unordered_map<int, int> mp1;
        for(auto i:st)
         mp1[i.first]++;
        
       
        unordered_map<int, int> mp2;
        for(auto i:mp1)
         mp2[i.second]++;
        
        
        for(auto i:mp2){
            ans[(i.first)-1]=i.second;
        }
        
        return ans;
    }
};