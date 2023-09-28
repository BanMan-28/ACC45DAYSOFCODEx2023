#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,m;
	    cin>>n>>m;
	    int run = 36*m;
	    if(n<=run){
	        cout<<"yes"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
