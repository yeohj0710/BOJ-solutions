#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool check = false;
    for(int i=0; i<N; i++)
        if(v[i] == "anj") check = true;

    if(check) cout << "뭐야;\n";
    else cout << "뭐야?\n";
}
