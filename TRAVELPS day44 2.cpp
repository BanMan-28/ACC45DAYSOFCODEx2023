#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b;
	cin>>t;
	while(t--){
	    string s;
	    int count(0);
	    cin>>n>>a>>b>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0') count+=a;
            else count+=b;
        }
        cout<<count<<endl;
	}
	return 0;
}