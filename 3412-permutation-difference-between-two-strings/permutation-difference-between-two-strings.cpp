class Solution {
public:
    int findPermutationDifference(string s, string t) {
        // int sum = 0;
        // for(int i=0;i<s.length();i++){
        //     for(int j=0;j<t.length();j++){
        //         if(s[i]==t[j]){
        //             sum = sum + abs(i-j);
        //         }
        //     }
        // }
        // return sum;
         map<char, int> m;
        int n = s.length();

        for(int i=0; i<n; i++){
            m[s[i]] = i;
        }
        
        int res = 0;
        for(int i=0; i<n; i++){
            res += abs(m[t[i]] - i);
        }
        
        return res;
    }
};