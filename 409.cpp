class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());
        int count =1;
        int len =0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                count++;
                 if(count==2)  {
                    len = len+2;
                    count = 1;
                    i=i+1;
                 }
            }
           
        }
        if(len<s.length()){
            return len+1;
        }
        else{
            return len;
        }
    }
};