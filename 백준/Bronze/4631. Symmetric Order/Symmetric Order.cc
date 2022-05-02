#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1;
    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<string> v(N);
        int Left = 0, Right = N-1;
        bool isLeft = true;

        for(int i=0; i<N; i++) {
            if(isLeft) cin >> v[Left++];
            else cin >> v[Right--];

            isLeft = !isLeft;
        }

        cout << "SET " << t << "\n";
        for(int i=0; i<N; i++) cout << v[i] << "\n";

        t++;
    }
}
