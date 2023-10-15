#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int y = x%3;
	    if(y==0)
	    cout<<0<<endl;
	    else
	    cout<<3-y<<endl;
	}
	return 0;
}
