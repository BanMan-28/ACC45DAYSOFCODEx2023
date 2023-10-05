#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b;
	    cin>>a>>b;
	    if((7-a)>=(7-b))
	    cout<<7-b<<endl;
	    else
	    cout<<7-a<<endl;
	}
	return 0;
}
