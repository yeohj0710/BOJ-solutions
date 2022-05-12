#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int cnt[100] = {};

    int a, b; cin >> a >> b;

    for(int i=1; i<=a; i++)
        for(int j=1; j<=b; j++) cnt[i + j]++;

    int Max = 0;
    for(int i=1; i<=a+b; i++) Max = max(Max, cnt[i]);

    for(int i=1; i<=a+b; i++)
        if(cnt[i] == Max) cout << i << "\n";
}
