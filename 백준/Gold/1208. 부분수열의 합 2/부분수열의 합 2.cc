#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int N, S;
long long ans = 0;
vector<int> arr;
map<int, int> cnt;

void left_search(int left, int right, int sum) {
    if(left == right) {
        cnt[sum]++;
        return;
    }
    left_search(left+1, right, sum);
    left_search(left+1, right, sum+arr[left]);
}

void right_search(int left, int right, int sum) {
    if(left == right) {
        if(cnt[S-sum]) ans += cnt[S-sum];
        else if(sum == S) ans++;
        return;
    }
    right_search(left+1, right, sum);
    right_search(left+1, right, sum+arr[left]);
}

int main() {
    scanf("%d %d", &N, &S);
    arr.resize(N);
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    left_search(0, N/2, 0);
    right_search(N/2, N, 0);
    if(!S) ans--;
    printf("%lld", ans);
}
