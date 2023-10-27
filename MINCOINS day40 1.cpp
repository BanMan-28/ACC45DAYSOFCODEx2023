#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if(X%10==0){
	        cout<<X/10<<endl;
	    }else if(X%5==0){
	        cout<<(X/10)+1<<endl;
	    }else
	    cout<<-1<<endl;
	    
	}
	return 0;
}