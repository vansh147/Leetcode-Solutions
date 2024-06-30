class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    //     vector<int>ans;
    //     map<int,int>m;
    //     for(int i=0;i<nums.size();i++){
    //         m[nums[i]]++;
    //     }
    //    for(int i=0;i<nums.size();i++){
    //     if(m[i+1]){
    //         continue;
    //     }
    //     else{
    //         ans.push_back(i+1);
    //     }
    //    }
    //    return ans;
     int n = nums.size();
        int c[n+1];
        for(int i=0;i<=n;i++){
            c[i] = 0;
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            c[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(c[i] == 0){
                res.push_back(i);
            }
        }
        return res;
    }


};