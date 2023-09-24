#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    double a = (static_cast<double>(X))/10;
	    
	    a= ceil(a);
	    if(a>Y){
	        cout<<"Yes"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
