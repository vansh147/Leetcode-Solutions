class Solution {
public:
    string customSortString(string order, string s) {
    string output = "";
        int sLen = s.length();
        unordered_map<char, int> mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(int i=0; i<order.length(); i++)
        {
            for (auto it=mp.begin(); it!=mp.end();) 
            {
                if (order[i] == it->first) {
                    output += string(it->second, order[i]);
                    it = mp.erase(it);
                }
                else
                it++;
            }
        }
        for(auto i:mp)
        {
            output+=string(i.second, i.first);
        }
        return output;
    }
};