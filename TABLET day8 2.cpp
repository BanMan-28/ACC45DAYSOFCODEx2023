#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,b,w,h,p,tab_area;
	    cin>>n>>b;
	    tab_area = 0;
	    int count=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>w>>h>>p;
	        if(p<=b){
	            if((w*h) > tab_area){
	            tab_area = w*h;
	            count = 1;
	            }
	        }
	            
	        }
	        if(count == 1){
	            cout<<tab_area<<endl;
	        }
	        else
	        cout<<"no tablet";
	    }
	
	return 0;
}
