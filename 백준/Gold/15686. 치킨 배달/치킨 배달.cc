#include <stdio.h>

int N, M, type, house_count = 0, chicken_count = 0, min_sum = 10000000;
int house[105][2], chicken[2505][2], check[2505] = {0, }, selected_chicken[15], dist[105][2505];
int abs(int a) { return a>=0?a:-a; }

void select(int left, int recent) {
    if(left <= 0) {
        int sum = 0, min_dist;
        for(int i=0; i<house_count; i++) {
            min_dist = 100;
            for(int j=0; j<M; j++)
                if(dist[i][selected_chicken[j]] < min_dist) min_dist = dist[i][selected_chicken[j]];
            sum += min_dist;
        }
        if(sum < min_sum) min_sum = sum;
        return;
    }
    for(int i=recent; i<chicken_count; i++) {
        if(!check[i]) {
            selected_chicken[M-left] = i;
            check[i] = 1;
            select(left-1, i+1);
            check[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            scanf("%d", &type);
            if(type == 1) {
                house[house_count][0] = i;
                house[house_count][1] = j;
                house_count++;
            }
            else if(type == 2) {
                chicken[chicken_count][0] = i;
                chicken[chicken_count][1] = j;
                chicken_count++;
            }
        }
    for(int i=0; i<house_count; i++)
        for(int j=0; j<chicken_count; j++) dist[i][j] = abs(house[i][0]-chicken[j][0]) + abs(house[i][1]-chicken[j][1]);
    select(M, 0);
    printf("%d", min_sum);
}
