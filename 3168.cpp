class Solution {
public:
    int minimumChairs(string s) {
        int count =0;
        int maxcount =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='E'){
                count++;
                maxcount = max(maxcount,count);
            }
            else{
                maxcount = max(maxcount,count);
                count--;
            }
        }
        return maxcount;
    }
};