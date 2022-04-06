#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int Min;
    if(pow((int)sqrt(N), 2) == N) Min = (int)sqrt(N);
    else Min = (int)sqrt(N) + 1;

    if(Min*Min > M) {
        cout << "-1";
        return 0;
    }

    int sum = 0;
    for(int i=Min; i*i<=M; i++) sum += i*i;
    cout << sum << "\n" << Min*Min;
}
