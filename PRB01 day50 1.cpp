#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    for(int i = 2;i<=n;i++)
	    {
	        if(n%i==0){
	        count++;}
	    }
	    if(count==1){
	        cout<<"yes"<<endl;
	    }
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
