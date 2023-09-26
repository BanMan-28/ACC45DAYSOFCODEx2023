#include <iostream>
using namespace std;

int main() {
	// your code goes here
int T;
cin>>T;
 for(int i=0;i<T;i++){
     int x,y;
     cin>>x>>y;
     int a = y%x;
     if(a==0){
         cout<<y/x-1<<endl;
     }
     else 
     cout<< y/x<<endl;
}
	return 0;
}
