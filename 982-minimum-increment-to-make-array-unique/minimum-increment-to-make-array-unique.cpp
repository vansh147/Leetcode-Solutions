class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count =0;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                continue;
            }
            else{
                count = count - nums[i]+nums[i-1] +1;
                nums[i] = nums[i-1]+1;
            }
        }
        return count;
      
    }
};