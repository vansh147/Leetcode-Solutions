class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count0 = 0;
        int count1 = 0;
        string t = "";
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        
        count1--;
        while(count1--){
            t = t+"1";
        }
        while(count0--){
            t = t+"0";
        }
        t = t + "1";
        return t;
        //  sort(s.rbegin(),s.rend());
        // for(int i = s.size()-1;i>=0;i--){
        //     if(s[i]=='1')swap(s[i],s[s.size()-1]);
        // }
        // return s;
    }
};