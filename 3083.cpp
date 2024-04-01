class Solution {
public:   
    bool isSubstringPresent(string s) {
      for (int i=0;i<s.length()-1;i++) {
            string sub = s.substr(i,2);
            string rev=string(sub.rbegin(), sub.rend());
            if (s.find(rev)!=string::npos) {
                return true;
            }
        }
        return false;
        
    }
};