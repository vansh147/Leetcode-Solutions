class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = 0;
        count += numBottles;
        while(numBottles/numExchange>0){
            count = count + numBottles/numExchange;
            numBottles = (numBottles/ numExchange) + (numBottles % numExchange);
        }

        return count;
    }
};