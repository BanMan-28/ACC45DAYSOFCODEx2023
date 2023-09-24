#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x= a+c;
	    if(x>=b){
	        cout<<x<<endl;
	    }
	    else 
	    cout<<b<<endl;
	}
	return 0;
}
