#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;
        string str; cin >> str;

        cout << "Case #" << t << ": ";

        for(int i=0; i<N; i++) {
            int byte = 0;

            for(int j=0; j<8; j++)
                if(str[i*8 + j] == 'I') byte += pow(2, 7-j);

            cout << char(byte);
        }

        cout << "\n";
    }
}
