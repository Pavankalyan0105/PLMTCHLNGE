
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        
         if( (s1+s2) != (s2+s1) ) return "";
        
        return s1.substr( 0 , __gcd( s1.size() , s2.size() ));
        
        
    }
};