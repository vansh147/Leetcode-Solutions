#include<bits/stdc++.h>
#include<iostream>
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
      long long sum =0;
      int count =0;
        long long int n = happiness.size()-1;
        sort(happiness.begin(),happiness.end());
        while(happiness.size()-1>=0 && k>0){
            sum += max (0,happiness[n] - count);
            count++;
            k--;
            n--;
        }
        return sum;
    }
};