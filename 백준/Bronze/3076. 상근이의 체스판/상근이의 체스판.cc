#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int R, C, A, B; cin >> R >> C >> A >> B;
    bool check = true;
    for(int i=0; i<R; i++) {
        for(int j=0; j<A; j++) {
            for(int k=0; k<C; k++) {
                for(int l=0; l<B; l++) {
                    if(check) cout << "X";
                    else cout << ".";
                }
                check = !check;
            }
            cout << "\n";
            if(C%2) check = !check;
        }
        check = !check;
    }
}

