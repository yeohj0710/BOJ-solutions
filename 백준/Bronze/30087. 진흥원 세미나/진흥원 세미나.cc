#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"Algorithm", "DataAnalysis", "ArtificialIntelligence", "CyberSecurity", "Network", "Startup", "TestStrategy"};
    vector<string> u = {"204", "207", "302", "B101", "303", "501", "105"};

    int N; cin >> N;

    while(N--) {
        string str; cin >> str;

        for(int i=0; i<v.size(); i++)
            if(v[i] == str) cout << u[i] << "\n";
    }
}
