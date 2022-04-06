#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int a = 0, b = 0;
        while(N--) {
            int value; cin >> value;
            if(value == 0) a++;
            else b++;
        }

        cout << "Mary won " << a << " times and John won " << b << " times\n";
    }
}
