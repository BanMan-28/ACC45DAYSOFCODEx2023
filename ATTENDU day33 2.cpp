#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c=0;
	    string str="";
	    for(int i=0;i<n;i++){
	        char ch=s[i];
	        if(ch=='1')
	            c++;
	    }
	    int total=c+(120-n);
	    int p=(total*100)/120;
	    if(p<75)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}