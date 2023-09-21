#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int L, V1, V2;
        cin >> L >> V1 >> V2;

        
        double time_tortoise = static_cast<double>(L) / V1;

        
        double time_hare = static_cast<double>(L) / V2;
        
       
         time_hare = ceil(time_hare);


        if (time_hare < time_tortoise) {
            cout << time_tortoise - time_hare -1 << endl;
        } else {
            cout << -1 << endl; 
        }
    }

    return 0;
}
