#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=1 ; i<=t ; i++){
	    int a1, a2, b1, b2;
	    cin>>a1>>a2>>b1>>b2;
	    int t1=a1-a2;
	    int t2=b1-b2;
	    int net= t1+t2;
	    if(net<0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}