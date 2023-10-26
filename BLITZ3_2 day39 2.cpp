#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, a, b;
	    cin >> n >> a >> b;
	    int total_allocated = 360 + (n * 2);
	    int total_left = a + b;
	    cout << total_allocated - total_left << endl;
	}
	return 0;
}