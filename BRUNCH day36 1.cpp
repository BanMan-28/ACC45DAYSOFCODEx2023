#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T; 

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int maxifeed = X / Y;
        int result = min(maxifeed, 20); // Use the minimum of maxifeed and 20
        cout << result << endl;
    }
    return 0;
}