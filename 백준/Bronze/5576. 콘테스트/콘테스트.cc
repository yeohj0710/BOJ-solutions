#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A[10], B[10];
    for(int i=0; i<10; i++) cin >> A[i];
    for(int i=0; i<10; i++) cin >> B[i];
    sort(A, A+10);
    sort(B, B+10);
    cout << A[9]+A[8]+A[7] << " " << B[9]+B[8]+B[7];
}
