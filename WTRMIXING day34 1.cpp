#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int dt;
	cin>>dt;
	while(dt--)
	{
	    int da,db,dx,dy;
	    cin>>da>>db>>dx>>dy;
	    int dd = abs(da-db);
	    cout<<((da>db)?((da-dy<=db)? "YES" : "NO") : (da<db)?((da+dx>=db)? "YES" : "NO"): "YES") <<endl;
	}
	return 0;
}