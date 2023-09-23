#include <iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int D,count;
	    cin>>D;
	    char N[D];
	    cin>>N;
	    count=0;
	    
	    for(int i=0;i<D;i++){
	        
	        if(N[i]=='0'){
	        count++;}
	        else if(N[i]=='5'){
	            count++;
	        }
	        }
	        if(count>=1){
	            cout<<"Yes";
	        }
	        else if(count==0){
	            cout<<"No";
	        }
	    
	    
	}
	return 0;
}
