#include <iostream>
using namespace std;

int main() {

    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,a[9999999],b[9999999],j,temp=0,count=0,om=0,addy=0;
        scanf("%d",&n);
        
        for(j=0;j<n;j++)
        cin>>a[j];
        
        for(j=0;j<n;j++)
        cin>>b[j];
        
        for(j=0;j<n;j++)
        {
            if(a[j]>0)
            {
                count++;
                if(count>om) 
                   om=count;
            }
            else
            {
                count=0;
            }
            
            if(b[j]>0)
            {
                temp++;
                if(temp>addy) 
                   addy=temp;
            }
            else
            {
                temp=0;
            }
        }
        
        if(om>addy)
        cout<<"Om"<<endl;
        else if(om<addy)
        cout<<"Addy"<<endl;
        else if(om==addy)
        cout<<"Draw"<<endl;
    }

}
