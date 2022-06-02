
#include<bits/stdc++.h>
using namespace std;

string encode(string src)
{     
    string res;
    int i=0;
    
    while( i < src.size() ){
        char cur = src[i];
        int freq = 0;
        while( i < src.size() && src[i] == cur){
            i++;
            freq++;
        }
        
        res+=cur;
        res+=(freq+'0');
    }
    return res;
}     