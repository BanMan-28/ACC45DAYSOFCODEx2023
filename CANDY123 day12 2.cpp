#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,l=0,bb=0;
	    cin>>a>>b;
	     for(int i=1;;i++){
	        if(i%2==0){
	            bb+=i;
	            if(bb>b){
	                cout<<"Limak"<<endl; 
	                break;
	            } 
	        }
	        else{
	            l+=i;
	            if(l>a) {
	            cout<<"Bob"<<endl;
	            break;
	            }
	        }
	    }
	}
	return 0;
}
