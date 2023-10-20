#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	float x,y;
	while(t--)
	{
	    float z;
	    cin>>x>>y;
	    z=abs(x-y)/2;
	    cout<<2*z<<endl;
	}
	return 0;
}