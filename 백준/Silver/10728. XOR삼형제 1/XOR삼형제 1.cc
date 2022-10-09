#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    vector<int> ans;

    while(T--) {
        int N; cin >> N;

        for(int i=1; i<pow(2, N); i++) {
            vector<int> v;

            for(int j=0; j<N; j++)
                if(i & (1 << j)) v.push_back(j+1);

            bool check = true;

            for(int j=0; j<v.size(); j++)
                for(int k=j+1; k<v.size(); k++)
                    for(int l=k+1; l<v.size(); l++)
                        if(((v[j] ^ v[k]) ^ v[l]) == 0) check = false;

            if(check && v.size() > ans.size()) ans = v;
        }

        cout << ans.size() << "\n";

        for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << "\n";
    }
}
