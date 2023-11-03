#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int str[n];
	    for(int i=0;i<n;i++){
	       cin>>str[i];
	    }
	    long long int s=0;
	    for(int i=0;i<n-1;i++){
	        s += abs(str[i]-str[i+1])-1;
	   }
	   cout<<s<<endl;
	}
	return 0;
}