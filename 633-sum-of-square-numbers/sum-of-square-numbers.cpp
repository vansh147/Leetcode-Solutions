class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int a=0;
        long long int b = sqrt(c);
        while(a<=b){
            long long int sum = pow(a,2) + pow(b,2);
            if(sum==c){
                return 1;
            }
            else if(sum<c){
                a++;
            }
            else{
                b--;
            }
        }
        return false;
    }
};