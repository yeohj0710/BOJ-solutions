#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if(a < b) swap(a, b);
    while(b != 0) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, arr[100]; cin >> N;
    for(int i=0; i<N; i++) cin >> arr[i];

    for(int i=1; i<N; i++) {
        int gcd = GCD(arr[0], arr[i]);
        cout << arr[0]/gcd << "/" << arr[i]/gcd << "\n";
    }
}
