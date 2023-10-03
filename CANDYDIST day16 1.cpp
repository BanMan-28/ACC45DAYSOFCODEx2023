#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(n%m==0)
	    {
	        int divide=n/m;
	        if(divide%2==0)
	        {
	            cout<<"Yes"<<endl;
	        }
	        else{
	            cout<<"No"<<endl;
	        }
	    }
	    else{
	    cout<<"no"<<endl;
	    }
	}
	return 0;
}