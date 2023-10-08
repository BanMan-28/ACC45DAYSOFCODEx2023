#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,a,b,c;
	    cin>>x>>a>>b>>c;
	    int e = min(a,min(b,c));
	    int f = max(a,max(b,c));
	    int g = (a+b+c) - (e+f);
	    cout<<e*(x-1) + g<<endl;
	    
	}
	return 0;
}