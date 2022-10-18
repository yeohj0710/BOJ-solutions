#include <bits/stdc++.h>
using namespace std;
const int MAX = 2505, MSIZE = 55;

vector<int> Adj[MAX];
int R = 1, C = 1, Left[MAX], Right[MAX];
bool Visit[MAX];

bool DFS(int from) {
    Visit[from] = true;
    for(int i=0; i<Adj[from].size(); i++) {
        int to = Adj[from][i];
        if(Right[to] == -1 || (!Visit[Right[to]] && DFS(Right[to]))) {
            Left[from] = to, Right[to] = from;
            return true;
        }
    }
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;

    char Map[MSIZE][MSIZE];
    for(int i=1; i<=N; i++) {
        cin.clear();
        for(int j=1; j<=M; j++) cin >> Map[i][j];
    }

    int rowHole[MSIZE][MSIZE] = {}, colHole[MSIZE][MSIZE] = {};
    bool check[MAX];
    for(int i=1; i<=N; i++) {
		int s = 1, e = 1;
		for(int j=1; j<=M; j++) {
			if(Map[i][j] == '.') {
				if(e > s) R++;
				s = e = j;
			}
			else {
				rowHole[i][j] = R;
				e++;
			}
		}
		if(e > s) R++;
	}
	for(int j=1; j<=M; j++){
		int s = 1, e = 1;
		for(int i=1; i<=N; i++){
			if(Map[i][j] == '.'){
				if(e > s) C++;
				s = e = j;
			}
			else{
				colHole[i][j] = C;
				e++;
			}
		}
		if(e > s) C++;
	}

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            if(Map[i][j] == '*') Adj[rowHole[i][j]].push_back(colHole[i][j]);

    int match = 0;
    fill(Left, Left+R, -1), fill(Right, Right+C, -1);
    for(int i=1; i<=R; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match++;
    }

    cout << match;
}
