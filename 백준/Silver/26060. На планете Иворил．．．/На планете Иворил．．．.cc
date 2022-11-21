#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        string vo = "aeiouy";
        int a = 0, b = 0, c = 0;

        for(int j=0; j<str.length(); j++) {
            bool check = false;

            for(int k=0; k<vo.length(); k++)
                if(str[j] == vo[k]) check = true;

            if(!check) a++;
            if((j % 2 == 0 && check) || (j % 2 == 1 && !check)) b++;
            if((j % 2 == 0 && !check) || (j % 2 == 1 && check)) c++;
        }

        ans += min({a, b, c});
    }

    cout << ans << "\n";
}
