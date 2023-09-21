#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X, Y;
        cin >> X >> Y; 

        int total_amount = 0;

        if (Y <= X) {
            total_amount = Y; 
        } else {
            total_amount = X + (Y - X) * 2; 
        }

        cout << total_amount << endl;
    }

    return 0;
}
