class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res(nums.size(),0);
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] < pivot)             
               res[j++] = nums[i];
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == pivot)              
             res[j++] = nums[i];
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > pivot)               
             res[j++] = nums[i];
        return res;
    }
};