#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int song[n];
	    for(int i=0;i<n;i++){
	        cin>>song[i];
	    }
	    int k;
	    cin>>k;
	    int UJ=song[k-1];
	    sort(song,song+n);
	    for(int i=0;i<n;i++){
	        if(song[i]==UJ){
	            cout<<i+1<<endl;
	        }
	    }
	}
	return 0;
}