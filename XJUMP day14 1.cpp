#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int x,y;
	    cin>>x>>y;
	    int a = x/y;
	    int b = x%y;
	    cout<<a+b<<endl;
	}
	return 0;
}
