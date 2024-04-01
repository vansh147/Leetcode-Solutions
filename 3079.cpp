#include <bits/stdc++.h>
class Solution {
public:
    int replace(int x){
        int count = 0;
        string s ="";
        int maxd = INT_MIN;
        while(x>0){
            count++;
            maxd = max(maxd,x%10);
            x = x/10;
        }
        int number = 1;
        int newnumber = 0;
        while(count--){
            newnumber = newnumber+maxd*number;
            number = number*10;
        }
        return newnumber;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum =0;
        for(int i=0;i<nums.size();i++){
            int maxdigit = replace(nums[i]);
            sum  = sum + maxdigit;
        }
        return sum;
    }
};