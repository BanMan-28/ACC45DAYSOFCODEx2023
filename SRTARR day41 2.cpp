#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    string s;
	    cin>>s;
	   int count=0;
	    for(int i=0;i<a;i++){
	        if((s[i]=='1') && (s[i+1]=='0')) {
	             count++;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}