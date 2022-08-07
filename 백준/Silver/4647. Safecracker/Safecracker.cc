#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        string str; cin >> str;

        if(N == 0 && str == "END") break;

        vector<string> v;

        for(int a=0; a<str.length(); a++)
            for(int b=0; b<str.length(); b++)
                for(int c=0; c<str.length(); c++)
                    for(int d=0; d<str.length(); d++)
                        for(int e=0; e<str.length(); e++) {
                            if(a == b || a == c || a == d || a == e
                               || b == c || b == d || b == e || c == d
                               || c == e || d == e) continue;

                            int x1 = str[a] - 'A' + 1;
                            int x2 = str[b] - 'A' + 1;
                            int x3 = str[c] - 'A' + 1;
                            int x4 = str[d] - 'A' + 1;
                            int x5 = str[e] - 'A' + 1;

                            if(x1 - x2*x2 + x3*x3*x3 - x4*x4*x4*x4 + x5*x5*x5*x5*x5 != N) continue;

                            string s = "";

                            s += str[a];
                            s += str[b];
                            s += str[c];
                            s += str[d];
                            s += str[e];

                            v.push_back(s);
                        }

        if(v.size() == 0) {
            cout << "no solution\n";
            continue;
        }

        sort(v.begin(), v.end());

        cout << v.back() << "\n";
    }
}
