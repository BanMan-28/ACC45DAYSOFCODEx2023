#include <iostream>
#include<cmath>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    int N;
    cin>>N;
    double cars = static_cast<double>(N)/4;
    cars= ceil(cars);
    cout<<cars<<endl;
    
}
	return 0;
}
