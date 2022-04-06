#include<stdio.h>

int stack[100005], check[100005] = {0, }, top = -1, yet = 1, ans_count = 0, exist;
char ans[1000005];

int main() {
    int n, target, impossible = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &target);
        if(target >= yet) {
            while(yet <= target) {
                stack[++top] = yet++;
                ans[ans_count++] = '+';
            }
            top--;
            ans[ans_count++] = '-';
        }
        else if(!check[target]) {
            exist = 0;
            for(int i=0; i<=top; i++) if(stack[i] == target) exist = 1;
            if(!exist) {
                impossible = 1;
                break;
            }
            while(stack[top] != target) {
                top--;
                ans[ans_count++] = '-';
            }
            top--;
            ans[ans_count++] = '-';
            check[target] = 1;
        }
        else impossible = 1;
    }
    if(impossible) printf("NO");
    else for(int i=0; i<ans_count; i++) printf("%c\n", ans[i]);
}
