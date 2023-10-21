#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int len = s.length(), cnt=0;
        for(int i=0; i<s.length()-1; i++) {
            if(s[i] == '<' && s[i+1] == '>') {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}