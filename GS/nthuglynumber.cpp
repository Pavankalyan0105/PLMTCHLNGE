

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        int i=0,j=0,k=0;
        
        vector<int> v(1,1);
        
        while(v.size() < n){
            
            v.push_back( min({ v[i]*2 , v[j]*3 ,v[k]*5 }) );
            
            if( v.back() == v[i]*2 ) ++i;
            if( v.back() == v[j]*3 ) j++;
            if( v.back() == v[k]*5 ) k++;
        
        }
        return v.back();
    }
};