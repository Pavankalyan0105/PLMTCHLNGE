#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int left=0 , right = 0 , ans = 0;
        long long prod = 1;
        
        for( right = 0; right<n ;right++){
            
            prod*=a[right];
            
            while( left <= right && prod > k ){
                prod = (prod / a[left]);
                left++;
            }
           
           int cnt = (right-left+1);
           
           if(prod < k)
             ans+=cnt;
        }
        
        return ans;
        
    }
};