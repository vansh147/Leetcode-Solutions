class Solution {
public:
    int minPartitions(string n) {
        // sort(n.begin(),n.end());
        // return n[n.length()-1]-48;
        char maxDigit = '0';
        
        for (char digit : n)
            maxDigit = max(maxDigit, digit);

        return maxDigit - '0';
    }
};