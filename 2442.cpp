#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        long long reversed = 0;
        while (n != 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return (reversed > INT_MAX || reversed < INT_MIN) ? 0 : reversed;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newNum = reverse(nums[i]);
            ans.push_back(nums[i]);
            ans.push_back(newNum);
        }
        sort(ans.begin(), ans.end());
        count = 1; 
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] != ans[i - 1]) {
                count++;
            }
        }
        return count;
    }
};
