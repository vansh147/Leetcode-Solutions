class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
         int i=0, j, lines=1, width_sum=0;
        vector<int> arr;
        while(i<s.length())
        {
            j = s[i]-97;
            if((width_sum+widths[j])<=100)
            {
                width_sum += widths[j];
                i++;
            }
            else
            {
                lines++;
                width_sum = 0;
            }
        }
        arr.push_back(lines);
        arr.push_back(width_sum);
        return arr;
    }
};