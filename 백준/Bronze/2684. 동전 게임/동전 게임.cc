#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        string seq[8] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
        int cnt[8] = {};

        for(int i=0; i<38; i++) {
            string sub = str.substr(i, 3);

            for(int j=0; j<8; j++)
                if(sub == seq[j]) cnt[j]++;
        }

        for(int i=0; i<8; i++) cout << cnt[i] << " ";
        cout << "\n";
    }
}
