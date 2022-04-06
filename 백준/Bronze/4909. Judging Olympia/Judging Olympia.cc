#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a[6];
        for(int i=0; i<6; i++) cin >> a[i];

        bool check = false;
        for(int i=0; i<6; i++)
            if(a[i] != 0) check = true;
        if(!check) break;

        sort(a, a+6);
        double avg = 0;
        for(int i=1; i<5; i++) avg += a[i];
        avg /= 4;

        cout << avg << "\n";
    }
}
