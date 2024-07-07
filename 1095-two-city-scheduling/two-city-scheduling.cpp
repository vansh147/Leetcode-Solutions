class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
      vector<pair<int, int>> arr;
        for(int i=0 ; i<costs.size() ; i++){
            arr.push_back({costs[i][0]-costs[i][1], i});
        }
        sort(arr.begin(), arr.end());
        int ans=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(i<arr.size()/2)
                ans += costs[arr[i].second][0];
            else
                ans += costs[arr[i].second][1];
        }

        return ans;
    }
};