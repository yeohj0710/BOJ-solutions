#include <cstdio>
#define INF 100005
using namespace std;

int main() {
    int N, S, left = 0, right = 0, sum = 0, length = INF;
    int arr[100005] = {0, };
    scanf("%d %d", &N, &S);
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    sum = arr[0];
    while(left <= right && right < N) {
        if(sum < S) sum += arr[++right];
        else if(sum == S) {
            if(right-left+1 < length) length = right-left+1;
            sum += arr[++right];
        }
        else if(sum > S) {
            if(right-left+1 < length) length = right-left+1;
            sum -= arr[left++];
        }
    }
    if(length == INF) printf("0");
    else printf("%d", length);
}
