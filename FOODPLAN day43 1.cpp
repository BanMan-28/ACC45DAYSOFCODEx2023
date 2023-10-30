#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float n,m;
	    cin>>n>>m;
	    if((n-(n/10))<m){
	        cout<<"online"<<endl;
	    }
	    else if((n-(n/10))>m){
	        cout<<"dining"<<endl;
	    }
	    else{
	        cout<<"either"<<endl;
	    }
	}
	return 0;
}