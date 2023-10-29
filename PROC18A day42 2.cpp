#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,b,i,j;
	    cin>>n>>b;
	    int g[n];
	    for(i=0;i<n;i++)
	      cin>>g[i];
	    int s = 0,s1=0;
	    for(i=0;i<=n-b;i++){
	        s1=0;
	        for(j=i;j<b+i;j++)
	          s1 += g[j];
	          if(s1>s)
	           s=s1;
	    }
	    cout<<s<<endl;
	}
	return 0;
}