#include <iostream>
using namespace std;

int board[10][10];
bool given[10][10] = {0, }, row[10][10] = {0, }, col[10][10] = {0, }, box[10][10] = {0, }, check;

void solve(int i, int j, int dir) {
    if(given[i][j]) {
        if(dir == 1) {
            if(j < 9) solve(i, j+1, 1);
            else if(j == 9 && i < 9) solve(i+1, 1, 1);
            else if(j == 9 && i == 9) return;
        }
        else if(dir == -1) {
            if(j > 1) solve(i, j-1, -1);
            else if(j == 1 && i > 1) solve(i-1, 9, -1);
            else if(j == 1 && i == 1) return;
        }
    }
    else if(!given[i][j]) {
        check = 0;
        row[i][board[i][j]] = 0;
        col[j][board[i][j]] = 0;
        box[((i-1)/3)*3+(j-1)/3+1][board[i][j]] = 0;
        for(int k=board[i][j]+1; k<=9; k++) {
            if(!row[i][k] && !col[j][k] && !box[((i-1)/3)*3+(j-1)/3+1][k]) {
                board[i][j] = k;
                row[i][k] = 1;
                col[j][k] = 1;
                box[((i-1)/3)*3+(j-1)/3+1][k] = 1;
                check = 1;
                break;
            }
        }
        if(check) {
            if(j < 9) solve(i, j+1, 1);
            else if(j == 9 && i < 9) solve(i+1, 1, 1);
            else if(j == 9 && i == 9) return;
        }
        else if(!check) {
            if(board[i][j]) {
                row[i][board[i][j]] = 0;
                col[j][board[i][j]] = 0;
                box[((i-1)/3)*3+(j-1)/3+1][board[i][j]] = 0;
                board[i][j] = 0;
            }
            if(j > 1) solve(i, j-1, -1);
            else if(j == 1 && i > 1) solve(i-1, 9, -1);
            else if(j == 1 && i == 1) return;
        }
    }
}

int main() {
    for(int i=1; i<=9; i++)
        for(int j=1; j<=9; j++) {
            scanf("%1d", &board[i][j]);
            if(board[i][j]) {
                given[i][j] = 1;
                row[i][board[i][j]] = 1;
                col[j][board[i][j]] = 1;
                box[((i-1)/3)*3+(j-1)/3+1][board[i][j]] = 1;
            }
        }
    solve(1, 1, 1);
    for(int i=1; i<=9; i++) {
        for(int j=1; j<=9; j++) cout << board[i][j];
        cout << "\n";
    }
}
