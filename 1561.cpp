class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int maxsum = 0;
        sort(piles.begin(),piles.end());

        for(int i = piles.size()-1; i>=piles.size()/3 ; i = i-2){
           maxsum = maxsum + piles[i-1];
        }
        
        return maxsum;
    }
};