#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int freq=1;int mfreq=1;
	    for(int i=0;i<n;i++)
	    {
	        freq=1;
	        for(int j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j]){
	                freq++;
	                mfreq=max(mfreq,freq);}   
	        }
	        
	    }
	    cout<<n-mfreq<<endl;
	    
	}
	return 0;
}