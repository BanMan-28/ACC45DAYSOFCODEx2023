#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a[t],b[t];
	for(int i=0;i<t;i++)
	{
	    int count=0,count1=0;
	for(int i=0;i<3;i++)
	{
	    
	    cin>>a[i];
	}
	for(int i=0;i<3;i++)
	{
	    
	    cin>>b[i];
	}
	for(int i=0;i<3;i++)
	{
	    if(a[i]>b[i])
	    {
	        count++;
	    }
	    else
	    {
	        count1++;
	    }
	}
	if(count>count1)
	{
	    cout<<"A"<<endl;
	}
	else
	{
	    cout<<"B"<<endl;
	}
	}
	
	return 0;
}