#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ct=0;
	    cin>>n;
	    
	    int a[n],b[n];
	    //input first array
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	   // input second array
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    
	    //check the first elements , that is corner case. Very important
	    if(a[0]>=b[0])
	    {
			ct++;
		}
		else
		{
			ct = 0;
		}
		
  //check the subsequent cases for the time permitted 
	   for(int i=1;i< n;i++)
	    {
	       
	        
	        if(a[i]-a[i-1]>=b[i])
	        {
	            ct++;
	        }
	        
	    }
	   cout<<ct<<endl;
	    
	}
	return 0;
}