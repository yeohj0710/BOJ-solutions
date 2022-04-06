#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A[10], B[10], score1 = 0, score2 = 0;
    for(int i=0; i<10; i++) cin >> A[i];
    for(int i=0; i<10; i++) {
        cin >> B[i];
        if(A[i] > B[i]) score1++;
        else if(A[i] < B[i]) score2++;
    }
    if(score1 > score2) cout << "A";
    else if(score1 < score2) cout << "B";
    else cout << "D";
}
