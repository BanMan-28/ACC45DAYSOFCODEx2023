#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,serve;
cin >> a >>b;
serve = a+b;
if (serve%4==0 || serve%4==1)
    cout <<"alice"  << endl;
else
    cout <<"bob" << endl;
    
}
	return 0;
}