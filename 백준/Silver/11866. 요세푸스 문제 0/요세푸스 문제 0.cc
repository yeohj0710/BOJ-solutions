#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K, temp, cnt = 1, pop_count = 1, arr[1005];
    queue<int> group;
    cin >> N >> K;
    for(int i=1; i<=N; i++) group.push(i);
    while(!group.empty()) {
        temp = group.front();
        if(cnt%K == 0) {
            arr[pop_count++] = temp;
            group.pop();
        }
        else {
            group.pop();
            group.push(temp);
        }
        cnt++;
    }
    cout << "<" << arr[1];
    for(int i=2; i<pop_count; i++) cout << ", " << arr[i];
    cout << ">";
}
