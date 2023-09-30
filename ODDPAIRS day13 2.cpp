#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,i;
	    cin>>N;
	    int count = 0;
	    if(N<=1)
	    cout<<0<<endl;
	    else
	    {
	    for(i=1;i<=N;i++){
	    for(int j=1;j<=N;j++){
	        int sum= i+j;
	        if(sum%2!=0){
	            count++;
	        }
	    }
	        
	    }
	    cout<<count<<endl;
	    
	}
	}
	return 0;
}
