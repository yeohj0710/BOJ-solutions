#include <bits/stdc++.h>
using namespace std;

struct Consult { int time, value; };
vector<Consult> consult;

int N;
vector<int> dp; // dp[i] : "max value" can get on day "i"

int calc_dp(int day) {
    if(day >= N) return 0;
    if(dp[day] != -1) return dp[day];

    dp[day] = 0;

    if(day + consult[day].time <= N)
        dp[day] = max(dp[day], calc_dp(day + consult[day].time) + consult[day].value);

    return dp[day] = max(dp[day], calc_dp(day+1));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    consult.resize(N);
    dp.resize(N, -1);

    for(int i=0; i<N; i++)
        cin >> consult[i].time >> consult[i].value;

    cout << calc_dp(0);
}
