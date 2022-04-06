#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++) {
        int val; cin >> val;
        arr.push_back(val);
    }
    sort(arr.begin(), arr.end());

    double sum = 0;
    for(int i=0; i<N; i++) sum += arr[i];
    if(round(sum/N) > -1 && round(sum/N) < 1) cout << abs(round(sum/N)) << "\n";
    else cout << round(sum/N) << "\n";
    cout << arr[N/2] << "\n";

    int cnt[10000] = {};
    for(int i=0; i<N; i++) cnt[arr[i] + 4000]++;
    int maxFreq = 0;
    for(int i=0; i<=8000; i++)
        if(cnt[i] > maxFreq) maxFreq = cnt[i];
    int maxCnt = 0;
    for(int i=0; i<=8000; i++)
        if(cnt[i] == maxFreq) maxCnt++;
    if(maxCnt > 1) {
        bool check = false;
        for(int i=0; i<=8000; i++)
            if(cnt[i] == maxFreq) {
                if(!check) check = true;
                else {
                    cout << i-4000 << "\n";
                    break;
                }
            }
    }
    else
        for(int i=0; i<=8000; i++)
            if(cnt[i] == maxFreq) cout << i-4000 << "\n";

    cout << arr[N-1] - arr[0];
}
