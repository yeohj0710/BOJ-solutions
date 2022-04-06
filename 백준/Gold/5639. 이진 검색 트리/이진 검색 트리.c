#include <stdio.h>

typedef struct Node_type {
    int key;
    struct Node* left;
    struct Node* right;
} Node;

Node* insert(Node* node, int input) {
    if(node == NULL) {
        Node* node = (Node*)malloc(sizeof(Node));
        node->key = input;
        node->left = node->right = NULL;
        return node;
    }
    else if(input < node->key) node->left = insert(node->left, input);
    else if(input > node->key) node->right = insert(node->right, input);
    return node;
}

void postorder(Node* node) {
    if(node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    printf("%d\n", node->key);
}

int main() {
    int input;
    Node* root = NULL;
    while(scanf("%d", &input) != EOF) {
        root = insert(root, input);
    }
    postorder(root);
}
