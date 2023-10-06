#include<iostream>

#include<time.h> 
using namespace std;

typedef struct Node {
    int key;
    struct Node* lchild, * rchild;
}Node;

Node* getNewNode(int key)
{
    Node* p = (Node*)malloc(sizeof(Node));
    p->key = key;
    p->lchild = p->rchild = NULL;
    return p;
}

Node* insert(Node* root, int key)
{
    if (root == NULL) return getNewNode(key);
    if (rand() % 2) root->lchild = insert(root->lchild, key);  //随机插入
    else root->rchild = insert(root->rchild, key);
    return root;
}

void clear(Node* root)
{
    if (root == NULL) return;
    clear(root->lchild);
    clear(root->rchild);
    free(root);
    return;
}

void pre_order(Node* root)
{
    if (root == NULL) return;
    printf("%d ", root->key);
    pre_order(root->lchild);
    pre_order(root->rchild);
}

void in_order(Node* root)
{
    if (root == NULL) return;
    in_order(root->lchild);
    printf("%d ", root->key);
    in_order(root->rchild);
}

void post_order(Node* root)
{
    if (root == NULL) return;
    post_order(root->lchild);
    post_order(root->rchild);
    printf("%d ", root->key);
}

int main()
{
    srand(time(0));
    Node* root = NULL;
    for (int i = 0; i < 10; i++)
    {
        root = insert(root, rand() % 100);
    }

    pre_order(root); printf("\n");
    in_order(root); printf("\n");
    post_order(root); printf("\n");
    clear(root);
    return 0;
}

