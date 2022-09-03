#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        vector<vector<int>> v(5, vector<int>(5));

        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++) cin >> v[i][j];

        int ans = 0;

        for(int i=0; i<5; i++)
            for(int j=i; j<5; j++)
                for(int k=0; k<5; k++)
                    for(int l=k; l<5; l++) {
                        bool check = true;

                        for(int m=i; m<=j; m++)
                            for(int n=k; n<=l; n++)
                                if(v[m][n] != 1) check = false;

                        if(check) ans = max(ans, (j-i+1)*(l-k+1));
                    }

        cout << ans << "\n";
    }
}
