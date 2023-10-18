#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int c,x,y;
	    cin>>c>>x>>y;
	    cout<<(c*y)-(x*y)<<endl;
	}
	return 0;
}