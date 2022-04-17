#include <bits/stdc++.h>
using namespace std;

int N;

void f(int idx, int num) {
    if(idx == N+1) {
        cout << num << "\n";
        return;
    }

    for(int i=0; i<=9; i++) {
        if(idx == 1 && (i == 0 || i == 1)) continue;

        num = num*10 + i;

        bool prime = true;
        for(int j=2; j*j<=num; j++)
            if(num % j == 0) prime = false;

        if(prime) f(idx+1, num);

        num /= 10;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    f(1, 0);
}
