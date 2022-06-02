#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> dp;
    int mod = 1e9+7;
    int f(int idx , string& s){
    
        if(idx == s.size()) return 1;
        
        if( s[idx] == '0' ) return 0;
        
        int& ans = dp[idx];
        
        if(ans!=-1) return ans;
        
        // pick1
        int ch1 = f(idx+1 , s);
        
        //pick2
        int ch2 = 0;
        if( idx+1 < s.size()){
            int num = (s[idx]-'0')*10 + (s[idx+1]-'0');
            if(num <= 26){
                ch2 = f(idx+2 , s);
            }
        }
        
        return ans = (ch1+ch2)%mod;
    
    }
		int CountWays(string s){
		     int n = s.size();

              dp.resize(n+1 , -1);
            
              return f(0 , s);
		}

};