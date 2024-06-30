class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
       for(int i=0;i<nums.size();i++){
        if(m[i+1]){
            continue;
        }
        else{
            ans.push_back(i+1);
        }
       }
       return ans;
    }


};