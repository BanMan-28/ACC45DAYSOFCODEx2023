#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n,x,d;
	    cin>>n>>x>>d;
	    cout<< d + (n/(5*x))<<endl;
	}
	return 0;
}
