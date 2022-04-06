#include <cstdio>
#include <queue>
using namespace std;

int main() {
    int N, input;
    priority_queue<int, vector<int>, greater<int>> pq;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &input);
        if(input == 0) {
            if(!pq.empty()) {
                printf("%d\n", pq.top());
                pq.pop();
            }
            else printf("0\n");
        }
        else pq.push(input);
    }
}
