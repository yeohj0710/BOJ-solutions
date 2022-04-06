#include <iostream>
using namespace std;

int graph[105][105];

int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> graph[i][j];
    for(int k=0; k<N; k++)
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(graph[i][k] && graph[k][j]) graph[i][j] = 1;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << graph[i][j] << " ";
        cout << "\n";
    }
}
