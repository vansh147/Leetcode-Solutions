// class Solution {
// public:
// bool CheckPalindrome(string s,int l,int r){
//     bool flag = true;
//     for(int i=l;i<=r;i++){
//         if(s[l]!=s[r]){
//             return false;
//         }
//         r--;
//     }
//     return true;
// }

//     vector<vector<string>> partition(string s) {
//         int left =0;
//         int right = 0 ;
//         vector<vector<string>> ans;
//         for(int i=left;i<s.length();i++){
//             for(int i=right;i<s.length();i++){
//             if(CheckPalindrome(s,left,right)){
//                 string t = s.substr(left,left-right);
//                 ans.push_back(t);
//             }
//         }
//     }
//         return ans;
//     }
// };
class Solution {
public:
    bool checkPalindrome(string str, int startIndex, int lastIndex){
        while(startIndex <= lastIndex){
            if(str[startIndex] != str[lastIndex])
                return false;
            startIndex++;
            lastIndex--;
        }
        return true;
    }
    void palindromePartition(int index, vector<string>& ds, vector<vector<string>>& output, string str){
        if(index == str.length()){
            output.push_back(ds);
            return;
        }
        for(int i = index; i < str.length(); i++){
            if(checkPalindrome(str, index, i)){
                ds.push_back(str.substr(index, i - index + 1));
                palindromePartition(i+1, ds, output, str);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> output;
        vector<string> ds;
        palindromePartition(0, ds, output, s);
        return output;
    }
};