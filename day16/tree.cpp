#include <bits/stdc++.h>
using namespace std;

class tree {
public:
    int data;
    tree* left;
    tree* right;

    tree(int val) : data(val), left(NULL), right(NULL) {}
};

void preOrder(tree* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    tree* root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30); // Missing in your code

    root->left->left = new tree(40);
    root->left->right = new tree(50);

    root->right->left = new tree(60);
    root->right->right = new tree(70);

    preOrder(root);
    return 0;
}
  