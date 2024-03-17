class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         int n = A.size();
        vector<int>v(n) , vis(n+1);
        int count = 0;
        for(int i = 0; i< A.size();i++){
            vis[A[i]]++;
            vis[B[i]]++;
            if(vis[A[i]] == 2){ 
                count++;
            }
            if(vis[B[i]] == 2 && A[i] != B[i]){  
                count++; 
            }
            
            v[i] = count;  
        }
        return v;
    }
};