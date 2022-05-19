#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int r, c, w, h; cin >> r >> c >> w >> h;

        cout << "Case #" << t << ":\n";
        cout << "+";
        for(int i=0; i<c; i++) {
            for(int j=0; j<w; j++) cout << "-";
            cout << "+";
        }
        cout << "\n";
        for(int i=0; i<r; i++) {
            for(int j=0; j<h; j++) {
                cout << "|";
                for(int k=0; k<c; k++) {
                    for(int l=0; l<w; l++) cout << "*";
                    cout << "|";
                }
                cout << "\n";
            }
            cout << "+";
            for(int j=0; j<c; j++) {
                for(int k=0; k<w; k++) cout << "-";
                cout << "+";
            }
            cout << "\n";
        }
    }
}
