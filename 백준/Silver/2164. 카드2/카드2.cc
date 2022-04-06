#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, temp;
    cin >> N;
    queue<int> card;
    for(int i=1; i<=N; i++) card.push(i);
    while(1) {
        temp = card.front();
        card.pop();
        if(card.empty()) break;
        temp = card.front();
        card.pop();
        if(card.empty()) break;
        card.push(temp);
    }
    cout << temp;
}
