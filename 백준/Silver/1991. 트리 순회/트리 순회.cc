#include <stdio.h>
#define PREORDER 1
#define INORDER 2
#define POSTORDER 3

struct node { char left, right; } tree[30];

void tour(char node, int type) {
    if(node == '.') return;
    if(type == PREORDER) printf("%c", node);
    tour(tree[node-'A'].left, type);
    if(type == INORDER) printf("%c", node);
    tour(tree[node-'A'].right, type);
    if(type == POSTORDER) printf("%c", node);
}

int main() {
    int n;
    char a, b, c;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf(" %c %c %c", &a, &b, &c);
        tree[a-'A'].left = b;
        tree[a-'A'].right = c;
    }
    tour('A', PREORDER);
    printf("\n");
    tour('A', INORDER);
    printf("\n");
    tour('A', POSTORDER);
}
