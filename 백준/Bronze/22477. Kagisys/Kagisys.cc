#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;
    bool check = true;

    while(M--) {
        string str; cin >> str;

        bool found = false;
        for(int i=0; i<N; i++)
            if(str == v[i]) found = true;

        if(found) {
            if(check) cout << "Opened by " << str << "\n";
            else cout << "Closed by " << str << "\n";

            check = !check;
        }
        else cout << "Unknown " << str << "\n";
    }
}
