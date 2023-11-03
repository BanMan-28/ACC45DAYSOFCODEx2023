#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    x= 10*x;
	    y= 5*y ;
	    if(x>y)
	    cout<<"FIRST"<<endl;
	    
	    else if(x==y)
	    cout<<"ANY"<<endl;
	    
	    else
	    cout<<"SECOND"<<endl;
	}
	
	return 0;
}
