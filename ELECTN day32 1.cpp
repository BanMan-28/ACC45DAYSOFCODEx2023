#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int count=0;
	    int arr[n];
	    for (int i=1;i<=n;i++)
	    {
	      cin>>arr[i];
	      if (arr[i]>=x) count++;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}