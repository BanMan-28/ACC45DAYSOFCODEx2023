#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int l,r,m; cin>>l>>r>>m;
	    int ans=0;
	    if(m%l==0) ans=((m/l)+(m/r));
	    else ans=(m/l)+(m/r)+1;
	    cout<<ans<<endl;
	}
	return 0;
}