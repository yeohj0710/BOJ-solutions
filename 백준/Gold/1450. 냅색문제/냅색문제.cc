#include <bits/stdc++.h>
using namespace std;

vector<long long> arr;
vector<long long> setA, setB;

void combine(int Left, int Right, vector<long long>& Set, long long sum) {
    if(Left > Right) {
        Set.push_back(sum);
        return;
    }

    combine(Left + 1, Right, Set, sum);
    combine(Left + 1, Right, Set, sum + arr[Left]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, C; cin >> N >> C;

    arr.resize(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    combine(0, N/2, setA, 0);
    combine(N/2 + 1, N-1, setB, 0);

    sort(setB.begin(), setB.end());

    long long ans = 0;
    for(int i=0; i<setA.size(); i++)
        ans += upper_bound(setB.begin(), setB.end(), C - setA[i]) - setB.begin();

    cout << ans;
}
