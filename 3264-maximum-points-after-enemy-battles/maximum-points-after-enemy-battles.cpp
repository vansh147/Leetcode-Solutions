class Solution {
public:
    long long maximumPoints(vector<int>& e, int c) {
        long long count =0;
        sort(e.begin(),e.end());
       long long int n = e.size();
      
       long long int sum =0;
       if(c<e[0]){
        return count;
       }
        for(int i=1;i<n;i++){
            sum += e[i];
        }
        sum = sum + c;
        count += sum/e[0];

        return count;
        
    }
};