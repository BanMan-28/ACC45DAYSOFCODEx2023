#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,al[3],bo[3],g,h,i;
	cin>>t;
	while(t--)
	{
	    for(i=0;i<3;i++)
	    {
	        cin>>al[i];
	    }
	    for(i=0;i<3;i++)
	    {
	        cin>>bo[i];
	    }
	    sort(al,al+3);
	    sort(bo,bo+3);
	    g=(al[2]*10+al[1])*10+al[0];
	    h=(bo[2]*10+bo[1])*10+bo[0];
	    if(g>h)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(g==h)
	    {
	        cout<<"Tie"<<endl;
	    }
	    else
	    {
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}