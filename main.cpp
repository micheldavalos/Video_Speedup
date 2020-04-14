#include <iostream>
#include <vector>
using namespace std;

int main() {
    double n, p, k;
    vector<double> ts(20000);
    
    cin >> n >> p >> k;
    
    for (int i = 0; i < n; ++i) {
        cin >> ts[i];        
    }
    cout.precision(6);
    cout << fixed;
    if (ts.size() == 1) {
        cout << ts[0];
    }
    else {
     ts[n] = k;
     double time = ts[0];
     int cont = 1;
     for (int i = 0; i < n; ++i) {
         time += (ts[i+1] - ts[i]) * (100 + cont++*p)/100; 
     }
     cout << time;
    }   
    
        
    return 0;
}
