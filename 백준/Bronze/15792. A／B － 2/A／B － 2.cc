#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    
    cout << a / b << ".";
    
    for(int i=0; i<1e3; i++) {
        a = (a % b) * 10;
        
        if(i >= 1 && a == 0) break;
            
        cout << a / b;
    }
    cout << "\n";
}