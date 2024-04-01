class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        int product = 1;
        vector<int> ans(l);
        for(int i=0;i<nums.size();i++){
            ans[i] = product;
            product *= nums[i];
       }
        int product2 = 1;
        for(int i=l-1;i>=0;i--){
            ans[i] *= product2;
            product2 *= nums[i];          
        }
        return ans;
    }
};