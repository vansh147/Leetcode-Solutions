class Solution {
public:
    bool is_vowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        }
        
        return false;
    }
    
    int maxVowels(string str, int k) {
        
        int n = str.size();
        
        int count_vowel = 0;
        
        int maxi = INT_MIN;
        
        for(int i = 0; i < n; i++)
        {
            if(i < k)
            {
                if(is_vowel(str[i]))
                {
                    count_vowel++;
                }
            }
            else
            {
                maxi = max(maxi, count_vowel);
                
                if(is_vowel(str[i]))
                {
                    count_vowel++;
                }
                
                if(is_vowel(str[i - k]))
                {
                    count_vowel--;
                }
            }
        }
        
        maxi = max(maxi, count_vowel);
        
        return maxi;
    }
};