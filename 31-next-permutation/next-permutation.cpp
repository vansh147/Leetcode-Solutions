class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(next_permutation(nums.begin(),nums.end())==true){
            return ;
        } 
    //    int n =nums.size();
    //     int i=0;
    //     int j=0;
    //     for(i=n-2;i>=0;i--){
    //         if(nums[i]<nums[i+1]){
    //             break;
    //         }
    //     }
    //     if(i<0){
    //         reverse(nums.begin(),nums.end());
    //     }
    //     else{
    //         for(j=n-1;j>i;j--){
    //             if(nums[j]>nums[i]){
    //                 break;
    //             }
    //         }
    //     swap(nums[i],nums[j]);
    //     reverse(nums.begin()+i+1, nums.end());     
    //     }
    }
};