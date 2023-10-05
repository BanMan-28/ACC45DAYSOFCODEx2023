#include <iostream>
using namespace std;


int sumdigit(int n1){
    int sum=0;
    while(n1>0){
	        int r=n1%10;
	        sum+=r;
	        n1=n1/10;
	    }
	    return sum;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=n+1;;i++){
	        if(sumdigit(n)%2!=sumdigit(i)%2){
	        cout<<i<<endl;
	        break;
	        }
	    }
	}
	return 0;
}