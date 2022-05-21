#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool check = true;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) {
                if(i == j || j == k || k == i) continue;

                if((v[i] - v[j])/v[k] != ((int)v[i] - (int)v[j])/((int)v[k])) check = false;
            }

    if(check) cout << "yes\n";
    else cout << "no\n";
}
